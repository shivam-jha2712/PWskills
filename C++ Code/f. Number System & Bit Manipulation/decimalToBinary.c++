#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    int power = 1;
    while (n > 0)
    {
        int paritydigit = n % 2;
        ans += paritydigit * power;
        power *= 10;
        n /= 2;
    }
    cout << ans << endl;
    return 0;
}

// Parity Digit : n / 2 -> remainder
// 1 --> parity odd of n;
// 0 --> parity even of n;
