#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     int arr1[] = {1,6,7,10};
     int arr2[] = {0,1,3,8,11,12,15,18};
     int m = 4;
     int n = 8;

    // code to merge two sorted arrays

    int result[m+n];
    int i = 0; // Help us iterarte through first array
    int j = 0; // Help us iterarte through second array
    int k = 0; // Help us iterarte through result array

while(i<m and j<n){
    // Both i and j should be within limits for m and n
    if(arr1[i] < arr2[j])
    {
        result[k] = arr1[i];
        k++;
        i++;
    }
    else{
        result[k] = arr2[j];
        j++;
        k++;
    }
}

while(i < m)
{
    // arr2 was exhausted and we still got elements left in arr1
    result[k] = arr1[i];
    i++;
    k++;
}

while(j < n)
{
    // arr1 was exhausted and we still got elements left in arr2
    result[k] = arr2[j];
    j++;
    k++;
}

for(int i =0; i< (m+n); i++)
{
    cout << result[i] << " ";
}cout << endl;

     return 0;
}