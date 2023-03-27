// Problem: Find the sum of all the elements in a rectangle in a 2D array
// This problem is based on the "Prefix Sum" concept

/*
Given a matrix 'a' of dimensions nxm and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the recatngle formed under these coordinates
*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int rectangleSumInMatrix(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int sum = rectangleSumInMatrix(matrix, l1, r1, l2, r2);

    cout << "Sum : " << sum << endl;
    return 0;
}