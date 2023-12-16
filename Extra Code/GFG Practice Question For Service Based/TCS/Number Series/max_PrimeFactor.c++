//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long int largestPrimeFactor(int N)
    {
        // code here
        int maxPrime = -1;

        // Handle even numbers
        while (N % 2 == 0)
        {
            maxPrime = 2;
            N /= 2;
        }

        // Handle odd numbers
        for (int i = 3; i <= sqrt(N); i += 2)
        {
            while (N % i == 0)
            {
                maxPrime = i;
                N /= i;
            }
        }

        // If N is a prime number greater than 2
        if (N > 2)
        {
            maxPrime = N;
        }

        return maxPrime;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0;
}
// } Driver Code Ends