#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string s;
    string t;

    cin >> s >> t;

    if (s.size() != t.size())
    {
        cout << "NO";
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
        t[i] = toupper(t[i]);
    }

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] != t[i])
        {
            cout << "NO" << endl;
        }
    }
    cout << "YES" << endl;

    return 0;
}