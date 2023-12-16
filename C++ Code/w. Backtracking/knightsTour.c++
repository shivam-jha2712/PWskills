#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool f(vector<vector<int>> &grid, int i, int j, int n, int cnt)
{
    if (i < 0 or j < 0 or i >= n or j >= n or grid[i][j] >= 0)
        return false;

    if (cnt == n * n - 1)
    {
        grid[i][j] = cnt; // This is for setng the last iteration of the movement.
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << grid[i][j] << "\t";
            }
            cout << endl;
        }
        return true;
    }

    grid[i][j] = cnt;
    // Check for all 8 posibilities of knight's movement
    if (f(grid, i - 1, j - 2, n, cnt + 1))
        return true;
    if (f(grid, i - 2, j - 1, n, cnt + 1))
        return true;
    if (f(grid, i + 1, j - 2, n, cnt + 1))
        return true;
    if (f(grid, i + 2, j - 1, n, cnt + 1))
        return true;
    if (f(grid, i + 1, j + 2, n, cnt + 1))
        return true;
    if (f(grid, i + 2, j + 12, n, cnt + 1))
        return true;
    if (f(grid, i - 1, j + 2, n, cnt + 1))
        return true;
    if (f(grid, i - 2, j + 1, n, cnt + 1))
        return true;

    // If any of the following on the further movement is not true then we would backtrack and thus again make it -1;
    grid[i][j] = -1;
    return false; // if any of this is  not true we would return false.
}

int main() // MAIN DEFINATION
{
    int n = 5;
    vector<vector<int>> grid(n, vector<int>(n, -1));
    f(grid, 0, 0, n, 0);
    return 0;
}