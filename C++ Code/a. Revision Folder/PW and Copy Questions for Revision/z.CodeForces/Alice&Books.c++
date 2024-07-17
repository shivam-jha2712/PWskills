#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int lo = 0;
        int hi = n - 1;

        sort(v.begin(), v.end());

        int k = lo + (hi - lo) / 2;

        int sum = v[k] + v[hi];

        cout << sum << endl;
    }

    return 0;
}