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

        int n;
        cin >> n;

        string str;
        cin >> str;

        int lo = 0;
        int hi = n - 1;

        while (lo < hi)
        {
            if (str[lo] != str[hi])
            {
                n = n - 2;
                lo++;
                hi--;
            }
            else if (str[lo] == str[hi])
            {
                cout << n << endl;
            }
        }

        cout << n << endl;
    }

    return 0;
}