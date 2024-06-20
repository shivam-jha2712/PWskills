#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void solve()
{
    string str;
    cin >> str;
    bool notSame = false;

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] != str[0])
        {
            swap(str[i], str[0]);
            notSame = true;
            break;
        }
    }
    if (!notSame)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << str << endl;
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}