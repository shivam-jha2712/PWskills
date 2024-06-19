#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    vector<vector<int>> v1(r1, vector<int>(c1));
    vector<vector<int>> v2(r2, vector<int>(c2));

    // Input for 1st matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> v1[i][j];
        }
    }

    // Input for 2nd matrix
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> v2[i][j];
        }
    }

    if (c1 != r2)
    {
        cout << "Matrices cannot be multiplied" << endl;
        return 0;
    }

    vector<vector<int>> v3(r1, vector<int>(c2, 0));
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                v3[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << v3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}