#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Following Eucleadian Algorithm

int gcd(int a, int b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    // Base Case
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);

    return 0;
}