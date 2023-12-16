#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Function to check if it's safe to place a knight at position (i, j)
bool canWePlace(vector<vector<char>> &grid, int i, int j)
{
    // Check if the cell is out of bounds or already occupied by a knight

    // Check if placing a knight two rows above and one column to the left would attack
    if (i - 1 >= 0 && j - 2 >= 0 && grid[i - 1][j - 2] == 'K')
        return false;

    // Check if placing a knight one row above and two columns to the left would attack
    if (i - 2 >= 0 && j - 1 >= 0 && grid[i - 2][j - 1] == 'K')
        return false;

    // Check if placing a knight one row above and two columns to the right would attack
    if (i - 1 >= 0 && j + 2 < grid[0].size() && grid[i - 1][j + 2] == 'K')
        return false;

    // Check if placing a knight two rows above and one column to the right would attack
    if (i - 2 >= 0 && j + 1 < grid[0].size() && grid[i - 2][j + 1] == 'K')
        return false;

    // It's safe to place a knight at this position
    return true;
}

// Function to recursively place knights on the chessboard
void knights(int m, int n, vector<vector<char>> &grid, int k, int i, int j)
{
    // Base case: All knights have been placed, thus print the chessboard
    if (k == 0)
    {
        for (int row = 0; row < m; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cout << (grid[row][col] != 'K' ? '_' : 'K') << ' ';
            }
            cout << endl;
        }
        cout << "--------------------------------" << endl;
        return;
    }

    // If we have reached the end of the board, return
    if (j == n)
    {
        return knights(m, n, grid, k, i + 1, 0);
    }

    // If we have reached the end of rows, all rows have been exhausted
    if (i == m)
    {
        return;
    }

    // Making the check for placements of knights
    for (int row = i; row < m; row++)
    {
        // Iterate through columns within the chessboard.
        // If we are starting a new row (row == i), begin from column 'j', otherwise, start from the first column (0).
        // This logic ensures we avoid revisiting already checked positions in the same row.
        for (int col = (row == i ? j : 0); col < n; col++)

        {
            if (canWePlace(grid, row, col))
            {
                grid[row][col] = 'K';
                knights(m, n, grid, k - 1, row, col + 1);
                grid[row][col] = '_'; // Backtracking if the place is not correct
            }
        }
    }
}

int main() // MAIN DEFINATION
{

    int n = 3, m = 3, k = 5;
    vector<vector<char>> grid(m, vector<char>(n, '_'));
    knights(m, n, grid, k, 0, 0);
    return 0;
}