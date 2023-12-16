#include <bits/stdc++.h> // Include necessary header file

using namespace std;

// Function to check if the rat can move to a given cell (a, b) on the grid
bool canRatMove(int a, int b, vector<vector<int>> &grid)
{
    return (a < grid.size() && b < grid.size() and a >= 0 and b >= 0) and grid[a][b] == 1;
}

// Function to find paths for the rat to reach the destination (n-1, n-1)
int ratInMaze(int i, int j, vector<vector<int>> &grid, string path, vector<string> &paths)
{
    int n = grid.size();
    int ans = 0;

    // Base case: If the rat has reached the destination, add the path to the paths vector
    if (i == n - 1 && j == n - 1)
    {
        paths.push_back(path);
        return 1;
    }

    // Mark the current cell as visited
    grid[i][j] = 2;

    // Recursive calls for exploring possible paths by moving in four directions
    if (canRatMove(i, j + 1, grid))
        ans += ratInMaze(i, j + 1, grid, path + "R", paths);

    if (canRatMove(i, j - 1, grid))
        ans += ratInMaze(i, j - 1, grid, path + "L", paths);

    if (canRatMove(i - 1, j, grid))
        ans += ratInMaze(i - 1, j, grid, path + "U", paths);

    if (canRatMove(i + 1, j, grid))
        ans += ratInMaze(i + 1, j, grid, path + "D", paths);

    // Backtrack: Mark the current cell as unvisited (1) before returning
    grid[i][j] = 1;

    return ans; // Return the total number of paths found
}

int main() // Main function definition
{
    int i = 0; // Starting row index
    int j = 0; // Starting column index

    // Define the grid with obstacle information (1 represents open path, 0 represents obstacle)
    vector<vector<int>> grid = {{1, 1, 1, 1}, {0, 1, 0, 1}, {0, 1, 0, 1}, {0, 1, 1, 1}};

    vector<string> paths; // To store all possible paths

    // Call the ratInMaze function to find all paths and store them in the 'paths' vector
    ratInMaze(i, j, grid, "", paths);

    // Print all paths
    for (const string &path : paths)
    {
        cout << path << endl;
    }

    return 0; // Indicate successful completion of the program
}
