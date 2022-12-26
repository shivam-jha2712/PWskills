#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n, sum = 0;
    cin >> n;
    while (n > 0)
    {
        sum = sum + n;
        n--;
    }
    cout << sum << endl;
    return 0;
}
// You can do it formula as well but loop concept needs to be applied
