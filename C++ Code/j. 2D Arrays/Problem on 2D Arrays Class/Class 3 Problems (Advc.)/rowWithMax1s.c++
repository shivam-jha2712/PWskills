#include<bits/stdc++.h>
using namespace std;

// 3 4
// 0 1 1 1 
// 0 0 0 1
// 0 0 0 1

// maxOnesRow = 0

// Since all the work is done on a vector thus we need to put an "&" before Vector in order to 
int maximumOnesRow(vector<vector<int>> &V)
{
//  Intializing a minimum variable and comparing it witn the first occurence of One
    int maxOnes = INT16_MIN;
// Intializing the another variable with -1 to give the row as the answer
    int maxOnesRow = -1;
//  Finding the colum size as the size of the very first row
    int column = V[0].size();
    for(int i = 0 ; i<V.size(); i++)
    {
        for(int j = 0; j< V[i].size(); j++)
        {
            // Finding the first occurence of 1 in every row and finding the number of ones in it;
            if(V[i][j] == 1)
            {
                int numberOfOnes = column - 1;
                if(numberOfOnes > maxOnes)
                {
                    // Followed by assigning its values to the variable declared above
                    maxOnes = numberOfOnes;
                    // Storing the number of row in the variable
                    maxOnesRow = i;
                }
            }
            
        }

    }
    //  Returing the row number
    return maxOnesRow;
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
    int result = maximumOnesRow(V);
    cout << result << endl;
    return 0;
}