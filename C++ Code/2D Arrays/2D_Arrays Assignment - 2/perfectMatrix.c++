#include <bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>> &mat)
{
    int r = mat.size();
    int c = mat[0].size();
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            if (mat[i][j] != mat[i - 1][j - 1])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    // vector<vector<int>> mat = {{9, 8, 7, 6}, {5, 9, 8, 7}, {1, 5, 9, 8}};
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec;

    // Inserting elements into vector
    for (int i = 0; i < n; i++)
    {
        // Vector to store column elements
        vector<int> v1;

        for (int j = 0; j < m; j++)
        {

            // Elements to insert in column
            int num;
            cin >> num;
            v1.push_back(num);
        }

        // Pushing back above 1D vector
        // to create the 2D vector
        vec.push_back(v1);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    if (check(vec))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}