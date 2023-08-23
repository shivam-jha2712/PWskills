#include <iostream>
#include <string>

using namespace std;

// Function to generate the next term in the "look and say" sequence based on the current term
string getNextTerm(const string &currentTerm)
{
    string nextTerm; // Variable to store the next term in the sequence

    int count = 1;                      // Counter to keep track of consecutive digits
    char currentDigit = currentTerm[0]; // Initialize with the first digit of the current term

    // Loop through the digits of the current term
    for (int i = 1; i < currentTerm.length(); i++)
    {
        if (currentTerm[i] == currentDigit)
        {
            count++; // Increment count for consecutive digits
        }
        else
        {
            // Append count and currentDigit to nextTerm, then reset count and update currentDigit
            nextTerm += to_string(count) + currentDigit;
            count = 1;
            currentDigit = currentTerm[i];
        }
    }

    // Append the final count and currentDigit to nextTerm
    nextTerm += to_string(count) + currentDigit;

    return nextTerm; // Return the generated next term
}

// Function to generate the entire "look and say" sequence up to the nth term
string generateLookAndSay(int n)
{
    string sequence = "1"; // Start with the first term "1"

    // Loop to generate terms up to the nth term
    for (int i = 1; i < n; i++)
    {
        sequence = getNextTerm(sequence); // Generate the next term and update sequence
    }

    return sequence; // Return the generated sequence
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Generate the "look and say" sequence for the given n
    string lookAndSaySequence = generateLookAndSay(n);

    // Display the generated sequence
    cout << "Look and Say Sequence for n = " << n << ": " << lookAndSaySequence << endl;

    return 0;
}
