#include <iostream>
#include <vector>

using namespace std;

// Function to check whether selected number can be placed at a specific index or not
bool canWePlace(vector<vector<char>> &board, int row, int col, char num)
{
    // Checking in the current row
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == num)
        {
            return false; // If the number exists in the same row, return false
        }
    }

    // Checking in the current column
    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == num)
        {
            return false; // If the number exists in the same column, return false
        }
    }

    // Checking for the 3x3 subgrid
    int r = (row / 3) * 3;
    int c = (col / 3) * 3;
    for (int i = r; i < (r + 3); i++)
    {
        for (int j = c; j < (c + 3); j++)
        {
            if (board[i][j] == num)
            {
                return false; // If the number exists in the same subgrid, return false
            }
        }
    }

    return true; // If the number can be placed at this index, return true
}

bool sudoku(vector<vector<char>> &board, int row, int col)
{
    // Base case:
    if (col == 9)
    {
        return sudoku(board, row + 1, 0); // Move to the next row when the column reaches the last index
    }
    if (row == 9)
    {
        return true; // Sudoku is solved when we reach the last row
    }
    if (board[row][col] == '.')
    { // If the current position on the board is empty
        // Place each possible number at that index
        for (int num = 1; num <= 9; num++)
        {
            // Check if the number can be placed at this position based on the defined conditions

            // If not, reset the previous state and continue checking other numbers
            if (canWePlace(board, row, col, '0' + num))
            {
                board[row][col] = '0' + num;            // If true is returned from the function, place the number
                bool res = sudoku(board, row, col + 1); // Move forward to the next iteration
                if (res)
                {                // if upon all calls we get it to be true then
                    return true; // the solution is formed
                }

                // If not solved at any step
                board[row][col] = '.'; // Reset the board to the previous state
            }
        }
        return false; // If no valid number can be placed at this position, return false
    }
    else
    {
        return sudoku(board, row, col + 1); // Move to the next column
    }
}

int main()
{
    // Define your Sudoku board as a vector of vectors of characters
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    // Call the solveSudoku function to solve the Sudoku board
    sudoku(board, 0, 0);

    // Print the solved Sudoku board
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
