#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> spiralMatrix(int n)
{
    vector<vector<int>> a(n, vector<int>(n, -1));
    int val = 1;
    int left = 0, right = n - 1;
    int up = 0, down = n - 1;
    n = n * n;
    n++;
    while (val < n)
    {
        for (int j = left; j <= right && val < n; j++)
        {
            a[up][j] = val++;
        }
        for (int i = up + 1; i <= down - 1 && val < n; i++)
        {
            a[i][right] = val++;
        }
        for (int j = right; j >= left && val < n; j--)
        {
            a[down][j] = val++;
        }
        for (int i = down - 1; i >= up + 1 && val < n; i--)
        {
            a[i][left] = val++;
        }
        left++, right--, up++, down--;
    }

    return a;
}

int main()
{
    int n;
    cin >> n;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
    matrix = spiralMatrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}