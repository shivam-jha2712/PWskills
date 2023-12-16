#include <iostream>
#include <vector>
using namespace std;

void printSolutions(vector<vector<string>> &solutions)
{
    for (const auto &solution : solutions) // amongst all the solutions
    {
        for (const string &row : solution) 
        {
            cout << row << endl; // print each row of the solution one by one
        }
        cout << "***************" << endl; // printed as seperator of solutions
    }
}

bool canPlaceQueen(int row, int col, vector<vector<char>> &grid)
{
    // Check for conflicts with previously placed queens
    // for (int i = 0; i < row; i++)
    // {
    //     if (grid[i][col] == 'Q')
    //     {
    //         return false; // Queen in the same column
    //     }
    //     if (col - (row - i) >= 0 && grid[i][col - (row - i)] == 'Q')
    //     {
    //         return false; // Queen in the left diagonal
    //     }
    //     if (col + (row - i) < grid.size() && grid[i][col + (row - i)] == 'Q')
    //     {
    //         return false; // Queen in the right diagonal
    //     }
    // }

    for (int i = row - 1; i >= 0; i--)
    {
        if (grid[i][col] == 'Q')
        {
            return false; // Queen in the same column
        }
    }

    for (int i = row - 1, j = col - 1; i >= 0 and j >= 0; i--, j--)
    {
        if (grid[i][j] == 'Q')
        {
            return false; // Queen in the left diagonal
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0 and j < grid.size(); i--, j++)
    {
        if (grid[i][j] == 'Q')
        {
            return false; // Queen in the right diagonal
        }
    }
    return true; // It's safe to place a queen here
}

void nqueen(int currRow, int n, vector<vector<char>> &grid, vector<vector<string>> &solutions)
{
    // If we have placed all queens in rows, we found a solution
    if (currRow == n)
    {
        vector<string> solution;
        for (int i = 0; i < n; i++)
        {
            // Convert each row to a string and add it to the solution
            solution.push_back(string(grid[i].begin(), grid[i].end()));
        }
        // Add the solution to the list of solutions
        solutions.push_back(solution);
        return;
    }

    for (int col = 0; col < n; col++)
    {
        // Check if we can place a queen in the current position
        if (canPlaceQueen(currRow, col, grid))
        {
            // Place the queen
            grid[currRow][col] = 'Q';
            // Recursively explore further possibilities
            nqueen(currRow + 1, n, grid, solutions);
            // Backtrack by removing the queen from the current position
            grid[currRow][col] = '.';
        }
    }
}

int main()
{
    int n;
    cout << "Enter the value of n (the number of queens): ";
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n, '.'));
    vector<vector<string>> solutions;

    nqueen(0, n, grid, solutions);

    cout << "Solutions for " << n << "-Queens problem:" << endl;
    printSolutions(solutions);

    return 0;
}
