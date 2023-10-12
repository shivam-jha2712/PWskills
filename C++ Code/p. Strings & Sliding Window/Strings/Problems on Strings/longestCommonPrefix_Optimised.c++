#include <bits/stdc++.h> // HEADER FILE

using namespace std;

string longestCommonPrefix(vector<string> &v)
{
    // keeping the first string as const and comparing it with all the other strings in the vector
    string s1 = v[0];

    int ans_length = s1.size();

    // loop through all the strings in the vector
    for (int i = 1; i < v.size(); i++) // Changed i <= v.size() to i < v.size() to avoid going out of bounds
    {
        int j = 0;
        // compare characters of s1 and v[i] until the characters are equal or one of the strings ends
        while (j < s1.size() && j < v[i].size() && s1[j] == v[i][j])
        { // finding the common prefix length
            j++;
        }

        ans_length = min(ans_length, j); // update the answer length with the minimum common prefix length (i.e; updating length of ans string)
    }

    // return the longest common prefix
    string ans = s1.substr(0, ans_length);
    return ans;
}

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cout << "Enter size of string vector:" << endl;
    cin >> n;

    vector<string> str(n);

    // input the strings
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    // call the longestCommonPrefix function and print the result
    cout << longestCommonPrefix(str) << endl;

    return 0;
}
