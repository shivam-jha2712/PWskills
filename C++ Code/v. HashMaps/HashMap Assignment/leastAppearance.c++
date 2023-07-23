#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int n = s.size();

    map<char, int> m;

    char ans;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }

    for (auto it : m)
    {
        if (it.second < min)
        {
            min = it.second;
            ans = it.first;
        }
    }

    cout << "The Character with minimum appearances : " << ans << endl;

    return 0;
}