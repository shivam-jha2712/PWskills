// https: // leetcode.com/problems/search-a-2d-matrix/description/

/*
74. Search a 2D Matrix -> (Medium)

You are given an m x n integer matrix matrix with the following two properties:

 -> Each row is sorted in non-decreasing order.
 -> The first integer of each row is greater than the last integer of the previous row.

Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0;
        int right = m * n - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int midValue = matrix[mid / n][mid % n]; // Convert the 1D index to 2D indices

            if (midValue == target)
            {
                return true;
            }
            else if (midValue < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return false;
    }
};

int main()
{
    int m, n;
    cout << "Enter the number of rows in the matrix: ";
    cin >> m;
    cout << "Enter the number of columns in the matrix: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    Solution solution;

    bool found = solution.searchMatrix(matrix, target);
    if (found)
    {
        cout << "Target " << target << " is found in the matrix." << endl;
    }
    else
    {
        cout << "Target " << target << " is not found in the matrix." << endl;
    }

    return 0;
}
