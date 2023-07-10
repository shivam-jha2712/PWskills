#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    while (n != 0)
    {
        int remainder = n % 10;
        cout << remainder;
        n = n / 10;
    }

    return 0;
}