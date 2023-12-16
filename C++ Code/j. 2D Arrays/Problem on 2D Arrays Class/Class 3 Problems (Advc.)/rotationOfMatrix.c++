// Rotation of Matrix 90 degree clockwise without using any extra space
#include<bits/stdc++.h>
using namespace std;

void rotateVector(vector<vector<int>> &V)
{
    // Creating a transpose 
    int size = V.size();
    for(int i =0; i<size; i++)
    {
        for(int j =0; j<i; j++)
        {
            swap(V[i][j], V[j][i]);
        }
    }

    // reversing every row to get the answer
    for(int i =0; i<V.size(); i++)
    {
        reverse(V[i].begin(), V[i].end());
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

vector<vector<int>>V(n, vector<int>(m));

for(int i =0; i<V.size(); i++)
{
    for(int  j =0; j< V[0].size(); j++)
    {
        cin >> V[i][j];
    }
}

rotateVector(V);
for(int i =0; i<n; i++)
{
    for(int j =0; j<m; j++)
    {
        cout << V[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}