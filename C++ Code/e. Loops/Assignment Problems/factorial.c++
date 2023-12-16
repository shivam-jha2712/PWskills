#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n, fac = 1;
    cin >> n;
    if (n != 0)
    {
        while (n > 0)
        {
            fac = fac * n;
            n--;
        }
        cout << fac;
    }
    else if (n == 0)
    {
        cout << "0";
    }

    return 0;
}