#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    int palindrome = n;

    string s = to_string(n);

    reverse(s.begin(), s.end());

    int ans = stoi(s);

    if (ans == palindrome)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}