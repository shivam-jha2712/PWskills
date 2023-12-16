#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int num, lastdigit, count = 0, reverse = 0;
    cin >> num;

    while (num > 0)
    {
        lastdigit = num % 10;
        num = num / 10;
        if (lastdigit == 0)
            count++;
        reverse = (reverse * 10) + lastdigit;
    }
    if (num % 10 == 0)
    {
        for (int i = 0; i < count; i++)
        {
            cout << "0";
        }
    }
    cout << reverse;

    return 0;
}