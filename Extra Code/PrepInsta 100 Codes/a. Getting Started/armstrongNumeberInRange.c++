#include <bits/stdc++.h>
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

bool checkArmstrong(int x)
{
    int temp = x;
    int count = 0;

    while (temp != 0) // Use 'temp' instead of 'x' for counting digits
    {
        temp = temp / 10;
        count++;
    }

    int result = armStrong(x, count);

    if (result == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int lower, upper;

    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    for (int i = lower; i <= upper; i++)
    {
        if (checkArmstrong(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
