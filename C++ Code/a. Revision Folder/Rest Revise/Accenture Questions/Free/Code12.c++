/*
A string is said to be a substring of another string if it can be formed by deleting 0 or more characters from the other string. Given two strings of equal length, what’s the longest string that can be constructed such that it is a substring of both?

For example, ABCD and ABDC have two children with maximum length 3, ABC and ABD. They can be formed by eliminating either the D or C from both strings. Note that we will not consider ABCD as a common child because we can’t rearrange characters and ABCD ≠ ABDC.



Input Format

There is one line with two space-separated strings,s1 and s2 .

Output Format

Print the length of the longest string s, such that is a child of both s1 and s2.

Sample Input

HARRY

SALLY

Sample Output

2

Explanation

The longest string that can be formed by deleting zero or more characters from HARRY and SALLY is AY , whose length is 2.
*/

#include <iostream>
#include <vector>
using namespace std;

int longestCommonChild(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();

    // Create a 2D vector to store the length of the common child
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));

    for (int i = 1; i <= len1; i++)
    {
        for (int j = 1; j <= len2; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[len1][len2];
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int result = longestCommonChild(s1, s2);
    cout << result << endl;

    return 0;
}
