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

    int maxi = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            maxi = max(maxi, v[i][j]);
        }
    }

    cout << maxi << endl;
    return 0;
}