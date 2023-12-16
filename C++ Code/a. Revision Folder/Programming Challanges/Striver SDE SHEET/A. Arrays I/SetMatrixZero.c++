#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> row(m, 0); // Keeps track of rows that contain zeroes
        vector<int> col(n, 0); // Keeps track of columns that contain zeroes

        // Step 1: Finding all the elements which are zeroes in the matrix
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row[i] = 1; // Mark the row as containing a zero
                    col[j] = 1; // Mark the column as containing a zero
                }
            }
        }

        // Step 2: Zeroing the rows and columns that contain zeroes
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (row[i] || col[j])
                {
                    matrix[i][j] = 0; // Set the element to zero
                }
            }
        }
    }
};

int main()
{
    // Test case
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    Solution obj;
    obj.setZeroes(matrix);

    // Display the modified matrix
    cout << "Modified matrix:" << endl;
    for (const auto &row : matrix)
    {
        for (const auto &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
