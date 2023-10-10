#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    unordered_map<char, int> map;

    for (int i = 0; i < input.length(); i++)
    {
        map[input[i]]++;
    }

    // Print characters and their frequencies in same order of their appearance
    for (auto it : input)
    {
        // Print only if this character is not printed before
        if (map[it] != 0)
        {
            cout << it << map[it] << " "; // Print character followed by the frequncy mapped to that character
            map[it] = 0;                  // And once any character is printed find that character and set its frequency to be "0".
        }
    }

    return 0;
}