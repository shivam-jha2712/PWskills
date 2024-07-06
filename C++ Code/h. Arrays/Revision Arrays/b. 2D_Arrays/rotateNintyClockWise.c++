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

    // Step 1: IN place transpose
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < i; j++)
        // for (int j = i+1; j < r; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < c; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }

    cout << "Rotated Matrix" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}