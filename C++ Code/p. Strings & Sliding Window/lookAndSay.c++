#include <iostream>
#include <string>

using namespace std;

string getNextTerm(const string &currentTerm)
{
    string nextTerm;

    int count = 1;
    char currentDigit = currentTerm[0];

    for (int i = 1; i < currentTerm.length(); i++)
    {
        if (currentTerm[i] == currentDigit)
        {
            count++;
        }
        else
        {
            nextTerm += to_string(count) + currentDigit;
            count = 1;
            currentDigit = currentTerm[i];
        }
    }

    nextTerm += to_string(count) + currentDigit;

    return nextTerm;
}

string generateLookAndSay(int n)
{
    string sequence = "1"; // Start with the first term "1"

    for (int i = 1; i < n; i++)
    {
        sequence = getNextTerm(sequence);
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
