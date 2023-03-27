#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     int array[] = {1,2,3,4,5};
     int n =5;
     int k = 2;

     k = k%n; // Because k can be greater than n;

     int ansarray[5];
   //Here we are using an extra array in order to rotate the given array thus, when we need to do it without using an extra array we need to follow the vector approach
     int j =0;
     // Inserting last k elements in answer array
     for(int i =n-k; i<n; i++)
     {
        ansarray[j++] = array[i];
     }

     // Inserting last 0 to k elements in answer array
     for(int i =0; i<=k; i++)
     {
        ansarray[j++] = array[i];
     }

     for(int i =0; i<n; i++)
     {
        cout << ansarray[i] << " ";
     }
     return 0;
}