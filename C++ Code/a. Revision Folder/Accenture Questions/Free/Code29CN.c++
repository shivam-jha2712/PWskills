#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    string temp = s;

    reverse(temp.begin(), temp.end());
    if (temp == s)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}