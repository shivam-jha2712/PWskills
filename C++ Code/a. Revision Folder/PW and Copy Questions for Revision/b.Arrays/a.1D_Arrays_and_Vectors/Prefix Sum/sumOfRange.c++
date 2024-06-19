#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int sumInRange(vector<int> &v, int l, int r)
{
    int n = v.size();
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        sum += v[i];
    }
    return sum;
}

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    vector<int> v(n + 1); // done just to follow 1 based indexing

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // Calculating the prefix sum
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
    }

    int q;
    cin >> q;

    int l, r;
    while (q--)
    {
        cin >> l >> r;
        // ans = prefixSumArray[r] - prefixSumArray[l-1]
        cout << v[r] - v[l - 1];
        // cout << sumInRange(v, l, r);
    }
    return 0;
}