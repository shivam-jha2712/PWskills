#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {

        int a, b;
        cin >> a >> b;

        // if (a % 2 != 0 && b % 2 != 0)
        if ((a % 2 == b % 2) && a >= b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
