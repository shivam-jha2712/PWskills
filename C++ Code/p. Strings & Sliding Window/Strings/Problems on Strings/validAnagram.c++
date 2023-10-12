#include <bits/stdc++.h> // Include the necessary header file

using namespace std;

// Function to check whether two strings are anagrams or not
// Anagrams are strings that have the same characters but in a different order
string validAnagram(string s, string t)
{
    int n1 = s.length(); // Length of the first string
    int n2 = t.length(); // Length of the second string

    if (n1 != n2)
        return "no"; // If the lengths are different, they can't be anagrams

    sort(s.begin(), s.end()); // Sort characters of the first string in ascending order
    sort(t.begin(), t.end()); // Sort characters of the second string in ascending order

    for (int i = 0; i < n1; i++)
    {
        if (s[i] != t[i])
            return "no"; // If any characters differ at the same position, they are not anagrams
    }

    return "yes"; // All characters match at the same positions, so the strings are anagrams
}

int main()
{
    ios_base::sync_with_stdio(false); // Optimize input/output operations for faster execution
    cin.tie(0);
    cout.tie(0);

    string s, t;
    cin >> s; // Read the first string from the user
    cin >> t; // Read the second string from the user

    cout << validAnagram(s, t) << endl; // Call the validAnagram function and print the result

    return 0;
}
