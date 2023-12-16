#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Function to calculate the maximum number of consecutive 1's in a binary string
// with at most k allowed flips
int longestOnes(string str, int k)
{
    int zero_count = 0; // Counter to keep track of the number of zeros encountered
    int max_length = 0; // Maximum length of consecutive ones found so far
    int start = 0;      // Start index of the current window
    int end = 0;        // End index of the current window

    // Iterate through the string
    for(; end < str.length(); end++)
    {
        if (str[end] == '0')
        {
            zero_count++; // Increment zero count if a zero is encountered
        }

        // Check if the number of zeros exceeds the allowed flips (k)
        while (zero_count > k)
        {
            if (str[start] == '0')
            {
                zero_count--; // Reduce the flip count by reducing the zero
                start++;      // Contract the window by updating the start index
            }
        }
        // Update the max_length with the length of the current window
        max_length = max(max_length, end - start + 1);
    }
    return max_length; // Return the maximum length of consecutive ones
}

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string str;
    cout << "Enter the Binary string: ";
    cin >> str;

    int k;
    cout << "Enter the max allowed flips (k): ";
    cin >> k;

    cout << longestOnes(str, k) << endl; // Print the result

    return 0;
}
