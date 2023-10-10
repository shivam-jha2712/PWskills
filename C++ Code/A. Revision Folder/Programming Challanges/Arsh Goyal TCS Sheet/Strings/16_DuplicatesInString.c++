#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string str;
    cout << "Enter the String :";
    getline(cin, str);

    unordered_map<char, int> m;

    for (int i = 0; i < str.length(); i++)
    {
        m[str[i]]++;
    }

    for (auto it : m)
    {
        if (it.second > 1)
        {
            cout << it.first << ","
                 << " count = " << it.second << endl;
        }
    }

    return 0;
}