#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int gcd(int a, int b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main() // MAIN DEFINATION
{
    int a, b;
    cin >> a >> b;

    cout << __gcd(a, b) << endl;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;

    return 0;
}