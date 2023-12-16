#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int v, w;
    cin >> v >> w;
    float x = ((4 * v) - w) / 2;
    if ((w % 2 == 0) || w < 2 || w <= v)
    {
        cout << "INVALID INPUT" << endl;
        return 0;
    }
    cout << x << v - x << endl;
    return 0;
}