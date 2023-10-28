#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s2;
        cin >> s2;

        if (s.find(s2) != string::npos)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}

/*
abcdefg
3
abcd
1
abef
0
xyz
0

*/