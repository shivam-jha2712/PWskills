#include <iostream>
#include <string>

using namespace std;

// Function to generate the next term in the "look and say" sequence based on the current term
string getNextTerm(const string &currentTerm)
{
    string nextTerm;

    int count = 1;
    char currentDigit = currentTerm[0];

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

    return nextTerm;
}

// Function to generate the entire "look and say" sequence up to the nth term
string generateLookAndSay(int n)
{
    string sequence = "1"; // Start with the first term "1"

    for (int i = 1; i < n; i++)
    {
        sequence = getNextTerm(sequence); // Generate the next term and update sequence
    }

    return sequence;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    string lookAndSaySequence = generateLookAndSay(n);
    cout << "Look and Say Sequence for n = " << n << ": " << lookAndSaySequence << endl;

    return 0;
}
