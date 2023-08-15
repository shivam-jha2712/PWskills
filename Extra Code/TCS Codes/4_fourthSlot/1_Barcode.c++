#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    int price = 1;

    while (n != 0)
    {
        int digit = n % 10;
        price *= digit;
        n = n / 10;
    }

    cout << price << endl;
    return 0;
}