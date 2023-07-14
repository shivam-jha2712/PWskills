#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int fact(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}