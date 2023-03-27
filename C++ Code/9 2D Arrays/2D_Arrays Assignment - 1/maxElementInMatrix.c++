#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);
 
 int m ; 
 int n ;
 cin >> m >> n;
 int arr[m][n];
 
  for(int i =0; i<m ; i++)
  {
    for(int j =0; j<n; j++)
    {
        cin >> arr[i][j];
    }
  }

  int value = INT_MIN;
   for(int i =0; i<m ; i++)
  {
    for(int j =0; j<n; j++)
    {
        if(arr[i][j]>value)
        {
                value = arr[i][j];
        }
    }
  }

  cout << value;
{
    
}

    return 0;
}