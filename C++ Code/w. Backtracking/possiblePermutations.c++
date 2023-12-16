#include <iostream>
#include <string>

using namespace std;

// Recursive function to find all permutations of a string
void permutation(string &str, int i)
{
    // Base Case: When we reach the end of the string, a possible permutation is found
    if (i == str.length())
    {
        cout << str << endl; // Print the permutation
        return;
    }

    // Generate permutations by selecting each character at position i and swapping it
    // with characters at positions greater than or equal to i
    for (int j = i; j < str.size(); j++)
    {
        // Swap characters to consider different arrangements
        swap(str[i], str[j]);

        // Recursively generate permutations for the remaining characters
        permutation(str, i + 1);

        // Backtrack by restoring the original state (undo the swap)
        swap(str[j], str[i]);
    }
}

int main()
{
    string str;
    cout << "Enter a string to find its possible permutations: ";
    cin >> str;

    permutation(str, 0); // Start generating permutations from the first character
    return 0;
}
