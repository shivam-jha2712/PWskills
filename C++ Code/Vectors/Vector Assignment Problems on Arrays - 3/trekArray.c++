//The Given code is done by creating a new array and the data is in the new array of the summation stored
#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); // For fast I/O
 cin.tie(0);
 cout.tie(0);
 
 int n;
 cin >>n;
int array[n];
int sum = 0;
 for(int  i = 0; i<n; i++)
 {
    cin >> array[i];
 }

  for(int  i = 1; i <= n; i++)
 {
     array[i] = array[i] + array[i-1];
 }

 for(int  i = 1; i<=n; i++)
 {
    cout <<  array[i] << " ";
 }
 cout << endl;

if(*max_element(array, array + n)>0)
{
    cout << *max_element(array, array + n) << endl;
}

else
{
    cout << "0" << endl;
}

    return 0;
}