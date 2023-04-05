#include <bits/stdc++.h> // HEADER FILE

using namespace std;

string removeOcc(string &s, int idx, int n)
{
    // Base case: If string moves to the last element and no characters are left in the string to check then just return empty string.
    if (idx == n)
    {
        return "";
    }
    // Assumption: It is just to find that if the string s works fine to remove all the occurences of the character "a" in the string for all the elements in the string starting after idx then---
    else
    {
        // As Self Work: If the current char is not "a" then just append the character to the output of the function removeOcc(s, idx + 1, n).
        if (s[idx] == 'a')
        {
            return removeOcc(s, idx + 1, n);
        }
        else
        {
            return s[idx] + removeOcc(s, idx + 1, n);
        }
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s = "abcax";
    int n = 5;

    cout << removeOcc(s, 0, n);

    return 0;
}