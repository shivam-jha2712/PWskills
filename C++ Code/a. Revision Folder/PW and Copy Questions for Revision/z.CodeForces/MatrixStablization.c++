#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }

        // Loop through each element in the matrix to find the element greater than all its neighbors
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                bool isGreater = true;     // Flag to check if the current element is greater than all its neighbors
                int maxNeighbor = INT_MIN; // Variable to store the maximum value among the neighbors

                // Check top neighbor if it exists
                if (i > 0)
                {
                    isGreater &= (a[i][j] > a[i - 1][j]);
                    maxNeighbor = max(maxNeighbor, a[i - 1][j]);
                }
                // Check bottom neighbor if it exists
                if (i < n - 1)
                {
                    isGreater &= (a[i][j] > a[i + 1][j]);
                    maxNeighbor = max(maxNeighbor, a[i + 1][j]);
                }
                // Check left neighbor if it exists
                if (j > 0)
                {
                    isGreater &= (a[i][j] > a[i][j - 1]);
                    maxNeighbor = max(maxNeighbor, a[i][j - 1]);
                }
                // Check right neighbor if it exists
                if (j < m - 1)
                {
                    isGreater &= (a[i][j] > a[i][j + 1]);
                    maxNeighbor = max(maxNeighbor, a[i][j + 1]);
                }

                // If the current element is greater than all its neighbors, update it to the maximum neighbor value
                if (isGreater)
                {
                    a[i][j] = maxNeighbor;
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
