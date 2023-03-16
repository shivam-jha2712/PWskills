// Problem: Find the sum of all the elements in a rectangle in a 2D array
// This problem is based on the "Prefix Sum" concept

/*
Given a matrix 'a' of dimensions nxm and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the recatngle formed under these coordinates
*/

// In this approach what we would be doing is that we need to simply do prefix sum of each of the vectors in the matrix 
// and also doing the same column wise and creating  a column wise prefix sum for the given matrix
// Followed by providing a data for solution

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int rectangleSumInMatrix(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    
    // prefix sum of array row wise
    for(int i =0; i<matrix.size(); i++)
    {
        for(int j= 1; j< matrix[0].size(); j++)
        {
            // normal prefix sum of each row is being calculated
            matrix[i][j] += matrix[i][j-1];
        }
    }
    
// prefix sum of array column wise 
// Since column wise ho raha hai toh row 1 se aur column 0 se intialse hoga
    for(int i =1; i<matrix.size(); i++)
    {
        for(int j= 0; j< matrix[0].size(); j++)
        {
            // normal prefix sum of each column is being calculated
            matrix[i][j] += matrix[i-1][j];
        }
    }
    // Creating sum of the rectangle by adding all the given prefix sums in a manner
    // Remember that the sum has aready been made in the two successive addition of the matrix both row and column wise
    // Thus we will not need any loops to consider the summation

    int top_sum = 0, left_sum = 0, topleft_sum = 0;
    if(l1!=0) top_sum = matrix[l1-1][r2];
    if(r1!=0) left_sum = matrix[l2][r1-1];
    if(l1!=0 && r1!=0) topleft_sum = matrix[l1-1][r1-1];

// This is teh complete logic for the addition of the data 
    sum = matrix[l2][r2] - top_sum - left_sum + topleft_sum;

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
cout << "Prefix sum matrix : " << endl;
for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    cout << "Sum : " << sum << endl;
    return 0;
}
// That is how it is done
