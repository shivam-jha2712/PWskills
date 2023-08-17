//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int getPairsCount(int arr[], int n, int k) {
        // Create an unordered map to store the frequency of elements
        unordered_map<int, int> map;
        
        // Initialize a count to keep track of the number of pairs
        int count = 0;
        
        // Loop through the array
        for (int i = 0; i < n; i++) {
            // Increment the count by the frequency of (k - arr[i])
            // This represents the number of pairs that can be formed with arr[i]
            // to make the sum equal to k
            count = count + map[k - arr[i]];
            
            // Increment the frequency of the current array element
            map[arr[i]]++;
        }
        
        // Return the total count of pairs
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends