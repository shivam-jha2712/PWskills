#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> v(r, vector<int>(c));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }

    cout << "Original Matrix" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    // This is because the transpose is having ro of columns as rows and "No of rows as columns"
    vector<vector<int>> t(c, vector<int>(r));

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            t[i][j] = v[j][i];
        }
    }

    cout << "Transpose Matrix" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}