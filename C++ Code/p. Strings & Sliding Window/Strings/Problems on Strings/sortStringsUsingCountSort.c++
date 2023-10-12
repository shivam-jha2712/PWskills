#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Function to perform counting sort on a string
string countSort(string str)
{
    // Create an array to store the frequency of each character (26 letters of the English alphabet)
    vector<int> freq(26, 0);

    // Calculate the frequency of each character in the string
    for (int i = 0; i < str.length(); i++)
    {
        int index = str[i] - 'a'; // Convert the character to an index (0 to 25) by subtracting 'a'
        freq[index]++;
    }

    // Create a sorted string based on the frequencies of characters
    int j = 0;
    for (int i = 0; i < 26; i++)
    {
        // Insert characters into the sorted string according to their frequencies
        while (freq[i]--)
        {
            // We are putting the jth index of answer string as all the elements on the ith index of the frquency array and once they become zero we move forward and do the same for the next jth index
            str[j] = i + 'a';
            j++;
        }
    }

    return str;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    cout << countSort(str) << endl;
    return 0;
}