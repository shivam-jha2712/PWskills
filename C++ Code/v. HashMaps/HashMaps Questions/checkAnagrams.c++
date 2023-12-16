#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isAnagram(string s1, string s2)

{
    // Find the sizes of both the strings
    int m = s1.size();
    int n = s2.size();

    if (m != n) // if the sizes are different, they are definetly not anagrams
    {
        return false;
    }
    // Else if they have same size then create a map of characters and its frequency
    unordered_map<char, int> charFrequency;

    for (auto it : s1) // for each character in s1 map it to its frequency
    {
        charFrequency[it]++;
    }
    // And now for each character in s2, if we find don't find it in the map then it will not be an anagram OR
    // If for any character the frequncy itself becomes 0 before we reach the end of the map then too
    // In both condition the  output would be false
    for (auto ch : s2)
    {
        if (charFrequency.find(ch) == charFrequency.end() || charFrequency[ch] == 0)
        {
            return false;
        }
        charFrequency[ch]--; // at each step reduce the frequncy of the found charcter from the map one by one
    }

    return true; // if at the end, each charcter is found and the frequncy of each charcters in string s1 is equal to that in string s2. Then it would result that both the strings are anagrams
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    if (isAnagram(s1, s2))
    {
        cout << "Anagram Exists" << endl;
    }
    else
    {
        cout << "Anagram Not Exists" << endl;
    }

    return 0;
}