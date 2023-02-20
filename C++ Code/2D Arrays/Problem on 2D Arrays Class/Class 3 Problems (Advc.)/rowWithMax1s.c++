#include<bits/stdc++.h>
using namespace std;

int maximumOnesRow(vector<vector<int>> &V)
{
    int maxOnes = INT16_MIN;
    int maxOnesRow = -1;
    int column = V[0].size();
    for(int i = 0 ; i<V.size(); i++)
    {
        for(int j = 0; j< V[i].size(); j++)
        {
            if(V[i][j] == 1)
            {
                int numberOfOnes = column - 1;
                if(numberOfOnes > maxOnes)
                {
                    maxOnes = numberOfOnes;
                    maxOnesRow = i;
                }
            }
            
        }

    }
    return maxOnesRow;
}

int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> V(n, vector<int>(m));

    for(int i =0; i< n; i++)
    {
        for(int j = 0; j< m; j++)
        {
            cin >> V[i][j];
        }
    }

    int result = maximumOnesRow(V);
    cout << result << endl;
    return 0;
}