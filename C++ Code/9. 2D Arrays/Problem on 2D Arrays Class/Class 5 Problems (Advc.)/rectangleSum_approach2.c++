// Problem: Find the sum of all the elements in a rectangle in a 2D array
// This problem is based on the "Prefix Sum" concept

/*
Given a matrix 'a' of dimensions nxm and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the recatngle formed under these coordinates
*/

// In this approach what we would be doing is that we need to simply do prefix sum of each of the vectors in the matrix and then finding the total sum by adding all of them

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

    // Creating sum of the rectangle by adding all the given prefix sums in a manner
    // Remember that the loop runs from l1 till l2 and not less than l2
    for(int i = l1; i<= l2; i++)
    {
        // The first case is when the value of r1 = 0 our logic would give an index error 
        if(r1 !=0)
        {
            sum += matrix[i][r2] - matrix[i][r1-1];
        }
        // Thus to tackle that error what we do is we just assign the value for the sum of "matrix[i][r1-1] = 0"
        else{
            sum += matrix[i][r2];
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