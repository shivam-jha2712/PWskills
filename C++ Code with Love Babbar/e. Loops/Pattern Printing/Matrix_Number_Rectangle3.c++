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

    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }

    return 0;
}