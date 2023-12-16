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
        int lastdigit = n % 10;
        ans += lastdigit * power;
        power *= 2;
        n /= 10;
    }
    cout << ans << endl;
    return 0;
}