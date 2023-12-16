#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    stringstream ss(s);
    string word, reversed;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        reversed += word + " ";
    }

    reversed.pop_back(); // Remove the trailing space

    return reversed;
}

int main()
{
    string s = "Let's take LeetCode contest";

    string reversed = reverseWords(s);

    // Print the reversed words
    cout << reversed << endl;

    return 0;
}
