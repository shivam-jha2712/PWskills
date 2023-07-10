#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isPalindrome(int n)
{
    string s = to_string(n);

    string ans(s.rbegin(), s.rend());

    return ans == s;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPalindrome(i))
        {
            cout << i << " ";
        }
        else
        {
            continue;
        }
    }

    return 0;
}