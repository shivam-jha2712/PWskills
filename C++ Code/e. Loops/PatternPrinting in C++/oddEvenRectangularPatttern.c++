#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j % 2 != 0)
                cout << "1";
            else
                cout << "2";
        }
        // for (int j = 2; j <= m; j += 2)
        // {
        // }
        cout << endl;
    }
    return 0;
}