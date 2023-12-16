#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n, m;
    cout << "Enter the Numbers of the range: ";
    cin >> n >> m;

    int ans = m * (m + 1) / 2 - n * (n + 1) / 2;
    cout << ans + n << endl;

    return 0;
}