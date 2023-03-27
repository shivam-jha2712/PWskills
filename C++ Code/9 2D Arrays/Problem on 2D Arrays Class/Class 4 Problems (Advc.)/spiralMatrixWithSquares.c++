#include <bits/stdc++.h>
using namespace std;
// It will return a 2D vector thus the function must never be void
vector<vector<int>> createSpiralMatrix(int n)
{
    // Intialized all the vector pointers from left, top, right to bottom 
    vector<vector<int>> matrix(n, vector<int>(n));
    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;

    int direction = 0;
    int value = 1;
    // Logic is same as the one in spiralOrder.c++ but instead of printing the values we are storing them in the matrix vector we are printing the squares and these square are intialized from 1 and go uptill n*n in a spiral order 

    while (left <= right && top <= bottom)
    {
        // movement is from left --> right
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                matrix[top][col] = value++;
            }
            top++;
        }

        // movement is from top --> bottom
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                matrix[row][right] = value++;
            }
            right--;
        }

        // movement is from right --> left
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                matrix[bottom][col] = value++;
            }
            bottom--;
        }

        // movement is from bottom --> top
        else
        {
            for (int row = bottom; row >= top; row--)
            {
                matrix[row][left] = value++;
            }
            left++;
        }

        direction = (direction + 1) % 4;
        // 0,1,2,3
    }

    return matrix;
}

int main()
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> matrix = createSpiralMatrix(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
