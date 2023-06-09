#include <bits/stdc++.h> // Include the necessary header file

using namespace std;

// Function to check whether two strings are anagrams or not
// Anagrams are strings that have the same characters but in a different order
bool validAnagram(string s, string t)
{
    vector<int> freq(26, 0); // Create an array to store the frequency of each character (26 letters of the English alphabet)

    if (s.length() != t.length())
        return false; // If the lengths of the strings are different, they can't be anagrams

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++; // Increment the frequency of character in string s
        freq[t[i] - 'a']--; // Decrement the frequency of character in string t
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false; // If any characters have non-zero frequency, they are not anagrams
    }

    return true; // All characters have zero frequency, so the strings are anagrams
}

int main()
{
    ios_base::sync_with_stdio(false); // Optimize input/output operations for faster execution
    cin.tie(0);
    cout.tie(0);

    string s, t;
    cin >> s >> t; // Read the first and second strings from the user

    if (validAnagram(s, t))
        cout << "Are Anagram" << endl; // If the strings are anagrams, print "Are Anagram"
    else
        cout << "Are Not Anagram" << endl; // If the strings are not anagrams, print "Are Not Anagram"

    return 0;
}
