#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);
 
int n, m;
cin >> n >> m;

int A[n][m];

for(int i =0; i<n; i++)
{
    for(int j =0; j<m; j++)
    {
        cin >> A[i][j];
    }
}

for(int i =0; i<m; i++)
{
    for(int j =0; j<n; j++)
    {
        cout << A[j][i] << " ";
    }
    cout << endl;
}

    return 0;
}