//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m);

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends

string isSubset(int a1[], int a2[], int n, int m)
{

    if (n < m)
    {
        return "No";
    }

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[a1[i]]++;
    }

    // Then Check it for second array
    for (int j = 0; j < m; j++)
    {
        if (mp[a2[j]] > 0) // if the elements of second array are present in the map
        {
            mp[a2[j]]--; // Then reduce it from the map
        }
        else
        {
            return "No"; // And if they are itself not present in the array then it would surely not be a subset
        }
    }

    return "Yes"; // On complete traversal return YES
}