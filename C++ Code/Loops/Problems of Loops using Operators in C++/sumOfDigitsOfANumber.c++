#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int num, sum = 0, lastdigit;
    cin >> num;
    while (num > 0)
    {
        lastdigit = num % 10;
        num = num / 10;
        sum = sum + lastdigit;
    }
    cout << sum;

    return 0;
}