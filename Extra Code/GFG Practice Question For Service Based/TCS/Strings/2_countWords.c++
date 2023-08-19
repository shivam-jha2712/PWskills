//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << countWords(s) << endl;
    }
}
// } Driver Code Ends

// User function Template for C++
int countWords(string s)
{
    int count = 0;

    int word = 0;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if ((s[i] == '\\' && s[i + 1] == 'n') || (s[i] == '\\' && s[i + 1] == 't'))
        {
            word = 0;
            i++;
        }
        else if (s[i] == ' ')
        {
            word = 0;
        }
        else if (word == 0)
        {
            count++;
            word = 1;
        }
    }
    return count;
}
