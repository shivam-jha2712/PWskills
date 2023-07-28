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
    /*
    Given a number x, determine whether the given number is Armstrong’s number or not.

    A positive integer of n digits is called an Armstrong number of order n (order is the number of digits) if.

    abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….
    */
    // int x = 153;
    int x;
    cout << "Enter the Number : ";
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