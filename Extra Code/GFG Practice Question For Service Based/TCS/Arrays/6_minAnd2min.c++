//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> ans;
    
    map<int, int>m;
    
    for(int i = 0; i<n; i++)
    {
        m[a[i]]++;
    }
    
    // This for the case when we have only single kind of element then we don't have any second min thus we 
    // get the answer as only -1;
    if(m.size() == 1)
    {
        ans.push_back(-1);;
    }
    
    // Finding the iterator to the map
    auto it = m.begin();

   
    ans.push_back(it->first); // then we would simply push the key value in ans vector
    it++; // Followed by incrementing the iterator
    ans.push_back(it->first); // then we would simply push the second key value in ans vector


    return ans;
    
}