#include <bits/stdc++.h>
using namespace std;

int fun(string s, char *first, char *last)
{
    *first = s[0];
    *last = s[s.size() - 1];
    int cnt = 0;
    for (auto &ch : s)
        if (ch == 't')
            cnt++;
    return cnt;
}

int main()
{
    string s;
    cin >> s;
    char first, last;
    int count = fun(s, &first, &last);
    cout << first << ' ' << last << ' ' << count;
    return 0;
}