#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int armStrong(int n, int d)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (pow(n % 10, d) + armStrong(n / 10, d));
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // int x = 153;
    int x;
    cin >> x;

    int temp = x;

    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }

    int result = armStrong(x, count);

    if (result == x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}