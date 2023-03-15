#include<bits/stdc++.h>
using namespace std;

// 3 4
// 0 1 1 1 
// 0 0 0 1
// 0 0 0 1

// maxOnesRow = 0

// 5 4
// 0 0 0 1
// 0 0 1 1
// 0 0 0 1
// 0 1 1 1
// 0 0 1 1 

// maxOnesRow = 3


// Since all the work is done on a vector thus we need to put an "&" before Vector in order to 
int leftMostOneRow(vector<vector<int>> &V)
{
    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j= V[0].size()-1;
    // finding left most one in 0th row
    while(j>=0 && V[0][j]==1)
    {
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }

// Check in rest of the rows if we can find a one which is left to the leftMostOne
    for(int i = 0; i< V.size(); i++)
    {
        while(j>=0 && V[i][j] == 1)
        {
            leftMostOne = j;
            j--;
            maxOnesRow = i;
        }
    }

    return maxOnesRow;

    // for(int j = V[0].size()-1; j>=0; j--)
    // {
    //     if(V[0][j] == 1)
    //     {
    //         leftMostOne = j;
    //     }
    //     else{
    //         break;
    //     }

    // }
}


int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);

    int n, m;
    cin >> n >> m;
// Takking Input in the vector and asiginig its size as well
    vector<vector<int>> V(n, vector<int>(m));

    for(int i =0; i< n; i++)
    {
        for(int j = 0; j< m; j++)
        {
            cin >> V[i][j];
        }
    }
// CALLING THE FUNCTION AND FINDING RESULT
    int result = leftMostOneRow(V);
    cout << result << endl;
    return 0;
}