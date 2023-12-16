#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); // For fast I/O
 cin.tie(0);
 cout.tie(0);
 
 int n, m;
 cin >> n >> m;

 int array1[n][m];
 for(int i =0; i<n; i++)
{
    for(int j=0; j<m; j++)
    {
        cin >> array1[i][j];
    }
}

 int array2[n][m];
 for(int i =0; i<n; i++)
{
    for(int j=0; j<m; j++)
    {
        cin >> array2[i][j];
    }
}

int result[n][m];
 for(int i =0; i<n; i++)
{
    for(int j=0; j<m; j++)
    {
        cout << array1[i][j]*array2[j][i];
    }
}



    return 0;
}