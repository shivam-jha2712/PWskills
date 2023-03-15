#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
void solve()
{
    int n, r, sum = 0, temp;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "wins" << endl;
    }
    else
    {
        cout << "loses" << endl;
    }
}
int main() // MAIN DEFINATION
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}