#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Isomorphic strings are those in which each string element is mapped in a one to one relationship with all the elements of the second string.

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
        return false;

        
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s, t;
    cin >> s >> t;
    if (isIsomorphic(s, t))
        cout << "Strings are Isomorphic" << endl;
    else
        cout << "Strings are not Isomorphic" << endl;

    return 0;
}