#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void subSequence(string &s, int i, int n, string ans, vector<string> &result)
{
    // Base case: When the complete traversal of the string takes place then you push_back the ans in the result vector.
    if (i == n)
    {
        result.push_back(ans);
        return;
    }
    // Assume that the string is producing all the subSequences such that it is producing the subsets which means it would either take the element next to it or will let it go and in that fashion just create a function subSequnce which ensure that it gives you all the subSequences that will maintain order.

    // As SelfWork : What we will be doing it we would keep on increasing the index such that it will either choose the next or will not and if it chooses we will concatenate it else we will not concatenate the subSequence

    subSequence(s, i + 1, n, ans, result);        // Will not choose the next character for the subSequence
    subSequence(s, i + 1, n, ans + s[i], result); // Will choose the next character for the subSequence
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s = "abcd";
    int n = s.size();
    string ans = "";
    vector<string> results;

    subSequence(s, 0, n, ans, results);

    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i] << " ";
    }

    return 0;
}