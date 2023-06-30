#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    // Converting all into lower
    transform(s.begin(), s.end(), s.begin(), ::tolower);


    set<char> set1;

    for (auto it : s)
    {
        set1.insert(it);
    }

    if (set1.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}