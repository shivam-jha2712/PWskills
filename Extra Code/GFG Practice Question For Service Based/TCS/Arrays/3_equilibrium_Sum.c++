//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
public:
    string equilibrium(int *arr, int n) {
        int total_sum = 0; // Calculate the total sum of the array

        for (int i = 0; i < n; i++) {
            total_sum += arr[i];
        }

        int left_sum = 0;

        for (int i = 0; i < n; i++) {
            total_sum -= arr[i]; // Update total_sum to exclude current element
            if (left_sum == total_sum) {
                return "YES";
            }
            left_sum += arr[i];
        }

        return "NO";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends