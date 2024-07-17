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

        int X = 0, Y = 0;

        bool passed = false;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'L')
            {
                X--;
            }
            else if (str[i] == 'R')
            {
                X++;
            }
            else if (str[i] == 'U')
            {
                Y++;
            }
            else if (str[i] == 'D')
            {
                Y--;
            }

            if (X == 1 && Y == 1)
            {
                passed = true;
            }
        }

        if (passed)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}