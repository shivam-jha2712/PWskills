#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << '*';
        }
        cout << "" << endl;
    }
    return 0;
}

// -----------------FirstPattern ----------------------

/*
-----------------Code--------------------------------
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << "" << endl;
    }
-----------------Pattern Result----------------------
 *
 **
 ***
 ****
 *****

 */

// -----------------Second Pattern ----------------------

/*
-----------------Code--------------------------------
  for (int i = 1; i <= n; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << '*';
        }
        cout << "" << endl;
    }
-----------------Pattern Result----------------------
****
***
**
*

 */