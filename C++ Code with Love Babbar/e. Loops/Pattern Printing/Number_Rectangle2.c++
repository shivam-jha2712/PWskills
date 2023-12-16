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

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << j << " ";
            // cout << m-j+1 << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Reverse of the above pattern : (n-j+1)" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // cout << j << " ";
            cout << m - j + 1 << " ";
        }
        cout << endl;
    }

    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    // But if we need to print the pattern to be
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1

    // Then instead of printing "j" we would print "n-j+1"
    return 0;
}