#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int num, count = 0;
    cin >> num;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    cout << count;

    return 0;
}