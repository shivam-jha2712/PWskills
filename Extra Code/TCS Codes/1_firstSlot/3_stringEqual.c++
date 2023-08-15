#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string s;
    cin >> s;

    int n = s.size();

    int star_count = 0;
    int hash_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
        {
            hash_count++;
        }
        else if (s[i] == '*')
        {
            star_count++;
        }
    }

    if (s.size() > 50)
    {
        cout << "Wrong Input";
    }
    else
    {
        cout << star_count - hash_count << endl;
    }
    return 0;
}