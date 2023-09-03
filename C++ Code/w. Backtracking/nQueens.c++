#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Function to check if a queen can be placed at a specific position (row, col) on the chessboard grid
bool canPlaceQueen(int row, int col, vector<vector<char>> &grid)
{
    // Check if there is no queen in the same column (vertical up)
    for (int i = row - 1; i >= 0; i--)
    {
        if (grid[i][col] == 'Q')
        {
            return false; // Queen found in the same column, cannot place the queen here
        }
    }

    // Check if there is no queen in the left diagonal (upward and to the left)
    for (int i = row - 1, j = col - 1; i >= 0 and j >= 0; i--, j--)
    {
        if (grid[i][j] == 'Q')
        {
            return false; // Queen found in the left diagonal, cannot place the queen here
        }
    }

    // Check if there is no queen in the right diagonal (upward and to the right)
    for (int i = row - 1, j = col + 1; i >= 0 and j < grid.size(); i--, j++)
    {
        if (grid[i][j] == 'Q')
        {
            return false; // Queen found in the right diagonal, cannot place the queen here
        }
    }

    // It's safe to place the queen at the specified position
    return true;
}

// Function to solve the N-Queens problem for a given row (currRow) and board size (n)
void nqueen(int currRow, int n, vector<vector<char>> &grid)
{
    // If we have placed queens in all rows, print the solution
    if (currRow == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << grid[i][j] << " "; // Print the current configuration of the chessboard
            }
            cout << endl; // End of the row
        }

        cout << "***************" << endl; // Separate solutions
    }

    // Iterate through all columns in the current row to find a valid placement
    for (int col = 0; col < n; col++)
    {
        // Check if we can place a queen at the current row and column
        if (canPlaceQueen(currRow, col, grid))
        {
            grid[currRow][col] = 'Q';     // Place the queen
            nqueen(currRow + 1, n, grid); // Recursively proceed to the next row
            grid[currRow][col] = '.';     // Backtrack by removing the queen for further exploration
        }
    }
}

int main() // MAIN DEFINATION
{

    int n;
    cout << "Enter the size of the grid & no of queens: " << endl;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n, '.'));
    nqueen(0, n, grid);

    return 0;
}