#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cout << "Enter Number of Rows : " << endl;
    cin >> n;
    cout << "Enter Number of Columns : " << endl;
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}