#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        int digit = (n / 2 + 1);
        cout << pow(digit, 2) << endl;
    }
    else
    {
        int digit = (n / 2 + 1);
        int other = n - digit;

        cout << (digit + 1) * (other + 1) << endl;
    }
    return 0;
}