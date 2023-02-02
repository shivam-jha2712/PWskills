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

    // 0 based indexing -> 0.....n-1
    // 1 based indexing -> 1.....n

// In the given logic we have done this
    // index  -> 0 1 2 3 4 5 6
    // vector -> _ 1 2 3 4 5 6
    // Here we are making the vector to be of size n+1 and the reason is that since the indexing is zero based in general and we need it to be 1 - based thus in order to make it 1-based we have increased the size by 1 and keeping the zeroth index to be empty

    vector<int> v(n+1,0);
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    //  calculate the prefix sum of the array
    for(int i = 1; i<= n; i++)
    {
        v[i] += v[i-1];
    }

    int q;
    cin >> q;

    while(q--){
        int l , r;
        cin >> l >> r;

        int ans=0;
        // ans = prefixsumarray[r] - prefixsumarray[l-1]
        ans = v[r] - v[l-1];
        cout << ans << endl;
    }

     return 0;
}