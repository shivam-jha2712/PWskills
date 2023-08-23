#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string sentence = "This is a sample sentence.";
    vector<string> wordArray;

    // Temporary variables to hold each word
    string word = "";

    // Iterate through the characters in the sentence
    for (char c : sentence)
    {
        if (c == ' ')
        {
            if (!word.empty())
            {
                wordArray.push_back(word); // Add the word to the array
                word = "";                 // Reset the word for the next word
            }
        }
        else
        {
            word += c; // Add the character to the current word
        }
    }

    // Add the last word if not empty
    if (!word.empty())
    {
        wordArray.push_back(word);
    }

    cout << "Number of words: " << wordArray.size() << endl;

    cout << "Words in the array:" << endl;
    for (const string &w : wordArray)
    {
        cout << w << endl;
    }

    return 0;
}
