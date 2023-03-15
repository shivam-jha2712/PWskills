#include<bits/stdc++.h>
using namespace std;

void spiralOrder(vector<vector<int>> &matrix)
{
    int left =0; 
    int right = matrix[0].size()-1;
    int top = 0;
    int bottom = matrix.size()-1;

    int direction =0;

    // left = 0 , right = 3
    // top = 0 , bottom = 4

    while(left<=right && top<=bottom)
    {
        // movement is from left --> right
        if(direction ==0)
        {
            for(int col = left; col<= right; col++)
            {
                cout << matrix[top][col] << " ";
            }
            top++;
        }

        // movement is from top --> bottom
        else if(direction == 1){
            for(int row = top; row<=bottom; row++)
            {
                cout << matrix[row][right] << " ";
            }
            right--;
        }

        // movement is from right --> left
        else if(direction == 2){
            for(int col = right; col>=left; col--)
            {
                cout << matrix[bottom][col] << " ";
            }
            bottom--;
        }

        // movement is from bottom --> top
        else{
            for(int row =bottom; row>=top; row--)
            {
                cout << matrix[row][left] << " ";
            }
            left++;
        }

        direction = (direction + 1)%4;
        // 0,1,2,3

    }

    return;
}

int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);

int n, m;
cin >> n >> m;

vector<vector<int>> matrix(n, vector<int>(m));

for(int i=0; i<n; i++)
{
    for(int j =0; j<m; j++) 
    {
        cin >> matrix[i][j];
    }
}

spiralOrder(matrix);

    return 0;
}