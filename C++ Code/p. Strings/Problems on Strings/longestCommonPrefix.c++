#include <bits/stdc++.h> // HEADER FILE

using namespace std;

string longestCommonPrefix(vector<string> &v)
{
    int n = v.size();
    sort(v.begin(), v.end());

    string s1 = v[0];     // first string
    int i = 0;            // pointer index of first string
    string s2 = v[n - 1]; // last string
    int j = 0;            // pointer index of last string

    string ans = "";

    while (i < s1.size() && j < s2.size())
    {
        if (s1[i] == s2[i])
        {
            // ans += s1[i]; // appending the charcter that matches
            ans.push_back(s1[i]);
            i++; // incrementing the pointer to check
            j++; // incrementing the pointer to check
        }
        else // although this will be of no use still if we don't get condition to be true we will break the loop
        {
            break;
        }
    }

    return ans;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cout << "Enter size of string vector:" << endl;
    cin >> n;

    vector<string> str(n);

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    cout << longestCommonPrefix(str) << endl;

    return 0;
}