#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string s;
    cin >> s;

    int n = s.size();
    int star = 0;
    int hash = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            star++;
        }
        else if (s[i] == '#')
        {
            hash++;
        }
    }

    cout << star - hash << endl;
    return 0;
}