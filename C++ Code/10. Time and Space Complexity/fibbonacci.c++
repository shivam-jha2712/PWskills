#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);
    int n;
    cin >> n;
    int arr[n+1];

    arr[0] = 0;
    arr[1] = 1;
    for(int i =2; i< n+1; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
cout << arr[n] << " ";
    // for(int i =0; i< n+1; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}