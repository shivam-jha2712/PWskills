#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int fact(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int sum = 0;

    int original = n;

    while (n != 0)
    {
        int digit = n % 10;
        sum += fact(digit);
        n = n / 10;
    }

    if (original == sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}