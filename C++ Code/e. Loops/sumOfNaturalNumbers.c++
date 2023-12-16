#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n, sum = 0, i = 1, sum1 = 0;
    cin >> n;
    // Using While Loop
    cout << "Using While Loop" << endl;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << sum << endl;

    // Using For Loop
    cout << "Using For Loop" << endl;
    for (int j = 1; j <= n; j++)
    {
        sum1 += j;
    }

    cout << sum1 << endl;
    return 0;
}