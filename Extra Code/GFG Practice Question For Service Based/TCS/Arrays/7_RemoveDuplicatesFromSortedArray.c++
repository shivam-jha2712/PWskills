// This is not done by hashmap although can be done but we can' thus this chutiya approach
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int remove_duplicate(int arr[], int n)
    {
        // code here
        if (n == 0 || n == 1)
            return n;

        // To store index of next unique element
        int j = 0;

        // Just maintaining another updated index i.e. j
        for (int i = 0; i < n - 1; i++)
            if (arr[i] != arr[i + 1])
            {
                arr[j++] = arr[i];
            }

        //  Taking care of the last element
        arr[j++] = arr[n - 1];

        return j;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        int n = ob.remove_duplicate(a, N);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends