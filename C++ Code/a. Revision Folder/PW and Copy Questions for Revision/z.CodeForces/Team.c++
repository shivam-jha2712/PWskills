#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1 && b == 1 && c == 0)
        {
            count++;
        }
        if (a == 0 && b == 1 && c == 1)
        {
            count++;
        }
        if (a == 1 && b == 0 && c == 1)
        {
            count++;
        }
        if (a == 1 && b == 1 && c == 1)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}