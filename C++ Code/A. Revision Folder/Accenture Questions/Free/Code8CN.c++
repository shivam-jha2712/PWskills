#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int operationchoices(int a, int b, int c)
{
    int ans;
    if (c == 1)
    {
        ans = a + b;
    }
    else if (c == 2)
    {
        ans = a - b;
    }
    else if (c == 3)
    {
        ans = a * b;
    }
    else if (c == 4)
    {
        ans = a / b;
    }

    return ans;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    cout << operationchoices(a, b, c);

    return 0;
}