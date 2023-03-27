#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

int FourContaining(int a)
{
    int count = 0;
    while (a != 0)
    {
        int n = a % 10;
        n = a / 10;
        if (n == 4)
        {
            count++;
        }
    }
    return count;
}
int main() // MAIN DEFINATION
{
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cout << FourContaining(a) << endl;
    }

    return 0;
}
