#include <bits/stdc++.h>
using namespace std;

int main()
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

        bool flag = true;

        for (int i = 0; i < n - 1; i++)
        {
            // Check if a digit comes after a letter
            if (isalpha(str[i]) && isdigit(str[i + 1]))
            {
                flag = false;
                break;
            }

            // Check if digits are not in non-decreasing order
            if (isdigit(str[i]) && isdigit(str[i + 1]) && str[i + 1] < str[i])
            {
                flag = false;
                break;
            }

            // Check if letters are not in non-decreasing order
            if (isalpha(str[i]) && isalpha(str[i + 1]) && str[i + 1] < str[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
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
