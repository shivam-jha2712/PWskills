#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    stringstream ss(input);
    vector<string> words;

    string word;

    while(ss >> word)
    {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    cout << "Reversed String: ";
    for (const string &w : words)
    {
        cout << w << " ";
    }

    return 0;
}
