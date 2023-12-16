#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // Initialize a sample string
    string str = "Hello, World! How are you?";

    // Convert to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "Lowercase: " << str << endl;

    // Find a substring
    string searchTerm = "how";
    size_t foundPos = str.find(searchTerm);
    if (foundPos != string::npos)
    {
        cout << "Found at position: " << foundPos << endl;
    }
    else
    {
        cout << "Not found." << endl;
    }

    // Replace a substring
    string replacement = "WHY";
    str.replace(foundPos, searchTerm.length(), replacement);
    cout << "After replacement: " << str << endl;

    // Splitting a string
    string sentence = "This is a sample sentence.";
    istringstream iss(sentence);
    vector<string> words(istream_iterator<string>{iss},
                         istream_iterator<string>());

    cout << "Words in the sentence: ";
    for (const string &word : words)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
