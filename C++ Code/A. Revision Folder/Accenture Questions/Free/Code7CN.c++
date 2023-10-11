/*
7. The given function has a string (str) and two characters, ch1 and ch2. Execute the function in such a way that str returns to its original string, and all the events in ch1 are replaced by ch2, and vice versa.
Replacecharacter(Char str1, Char ch1, Int 1, Char ch2)

Assumption

This string has only alphabets that are in lower case.

Example

Input:
str: apples
ch1: a
ch2: p

Output:
paales

Explanation
All the ‘a’ in the string is replaced with ‘p’. And all the ‘p’s are replaced with ‘a’
*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

string Replacecharacter(string &str, char ch1, char ch2)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ch1)
        {
            str[i] = ch2;
        }
        else if (str[i] == ch2)
        {
            str[i] = ch1;
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
    getline(cin, str);

    char ch1, ch2;
    cin >> ch1 >> ch2;

    cout << Replacecharacter(str, ch1, ch2);

    return 0;
}