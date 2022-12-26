#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    for (int i = 100; i < 500; i++)
    {
        int sum = 0;
        int n = i;
        while (n != 0)
        {
            sum = sum + ((n % 10) * (n % 10) * (n % 10));
            n = n / 10;
        }
        if (sum == i)
            cout << i << endl;
    }
    return 0;
}