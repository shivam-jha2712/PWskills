#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isPalindrome(const string &str)
{
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input))
    {
        cout << "It's a palindrome!" << endl;
    }
    else
    {
        cout << "It's not a palindrome!" << endl;
    }

    return 0;
}