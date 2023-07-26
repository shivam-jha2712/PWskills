#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Time Complexity - O(N);

bool checkNoOneToManyMapping(string s1, string s2)
{
    unordered_map<char, char> m; // Create an unordered map to store the mapping from characters in s1 to characters in s2.

    for (int i = 0; i < s1.length(); i++)
    {                                 // Iterate over each character in s1.
        if (m.find(s1[i]) != m.end()) // Check if the character is already present in the map.
        {
            if (m[s1[i]] != s2[i]) // If the character is present, check if the corresponding character in s2 matches the one in the map.
            {
                return false; // If not, it means there is a one-to-many mapping, and the function returns false.
            }
        }
        else
        {
            m[s1[i]] = s2[i]; // If the character is not already in the map, add it with its corresponding character in s2.
        }
    }

    return true; // If the loop completes without finding any one-to-many mappings, it means the mapping is one-to-one, and the function returns true.
}

bool isIsomorphic(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    // Check there exists no one to many mapping for s1->s2
    bool s1Tos2 = checkNoOneToManyMapping(s1, s2);

    // Check there exists no one to many mapping for s2->s1
    bool s2Tos1 = checkNoOneToManyMapping(s2, s1);

    // And if no one to many mapping exists for both s1->s2 and s2->s1
    return s1Tos2 && s2Tos1;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    if (isIsomorphic(s1, s2))
    {
        cout << "Isomorphic" << endl;
    }
    else
    {
        cout << "Not Isomorphic" << endl;
    }

    return 0;
}