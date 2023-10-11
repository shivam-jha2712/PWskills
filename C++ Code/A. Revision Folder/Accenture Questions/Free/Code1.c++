#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int def_diffrenceofSum(int n, int m)
{
    int ans = 0;
    int sum_n = 0;
    int sum_notn = 0;
    for (int i = 1; i <= m; i++)
    {
        if (i % n == 0)
        {
            sum_n += i;
        }
        else if (i % n != 0)
        {
            sum_notn += i;
        }
    }
    ans = sum_notn - sum_n;
    return ans;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    cout << def_diffrenceofSum(n, m);

    return 0;
}
