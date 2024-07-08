#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool can_convert(const vector<string> &a, const vector<string> &b, int n, int m)
{
    vector<vector<int>> diff(n, vector<int>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            diff[i][j] = (b[i][j] - a[i][j] + 3) % 3;
        }
    }

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < m - 1; ++j)
        {
            int change = diff[i][j];
            if (change != 0)
            {
                diff[i][j] = (diff[i][j] - change + 3) % 3;
                diff[i][j + 1] = (diff[i][j + 1] - change + 3) % 3;
                diff[i + 1][j] = (diff[i + 1][j] - change + 3) % 3;
                diff[i + 1][j + 1] = (diff[i + 1][j + 1] - change + 3) % 3;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (diff[i][m - 1] != 0)
            return false;
    }
    for (int j = 0; j < m; ++j)
    {
        if (diff[n - 1][j] != 0)
            return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        if (can_convert(a, b, n, m))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
