#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
int main() // MAIN DEFINATION
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, m = 0, flag = 0;
        scanf("%d", &n);
        m = n / 2;
        if (n == 1)
        {
            cout << "no" << endl;
            continue;
        }
        for (i = 2; i <= m; i++)
        {
            if (n % i == 0)
            {
                cout << "no" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}