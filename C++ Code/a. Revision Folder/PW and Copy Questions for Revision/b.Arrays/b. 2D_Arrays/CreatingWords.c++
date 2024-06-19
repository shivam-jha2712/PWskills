#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        char beg1 = s1[0];
        char beg2 = s2[0];

        swap(s1[0], s2[0]);

        cout << s1 << " " << s2 << endl;
    }
    return 0;
}