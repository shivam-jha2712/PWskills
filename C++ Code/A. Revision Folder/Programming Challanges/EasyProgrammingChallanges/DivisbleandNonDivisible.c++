#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n, m;
    cin >> n >> m;

    int num1 = 0;
    int num2 = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % m != 0)
        {
            num1 += i;
        }
        if (i % m == 0)
        {
            num2 += i;
        }

    }

    int ans = num1 - num2;
    cout << num1 << " " << num2 << endl;
    cout << ans << endl;
    return 0;
}