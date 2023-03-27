#include<bits/stdc++.h>
using namespace std;

// Dry Run
/*
if n = 5
the vector size  = 6
// 0 5 1 2 3 4
// 0 5 6 8 11 15 -> Prefix sum array 

// l = 1, r = 3
// ans = v[r] - v[l-1] = v[3] - v[0] = 8 - 0 = 8

// l = 2, r = 5
// ans = v[r]-v[l-1] = v[5] - v[1] = 15 - 5 = 10
*/

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     int n;
     cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    //  calculate the prefix sum of the array
    for(int i = 0; i< n; i++)
    {
        v[i] += v[i-1];
    }

        
        int l , r;
        cin >> l >> r;

        int ans=0;
        // ans = prefixsumarray[r] - prefixsumarray[l-1]
        ans = v[r] - v[l-1];
        cout << ans << endl;
    

     return 0;
}