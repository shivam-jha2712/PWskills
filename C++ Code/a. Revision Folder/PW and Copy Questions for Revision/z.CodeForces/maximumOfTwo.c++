#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << b << " " << a << endl;
        }
    }
    return 0;
}