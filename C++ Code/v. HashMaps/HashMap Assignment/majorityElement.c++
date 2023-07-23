#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> m;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        m[v[i]]++; // increment the map if the lement is found in the vector
    }

    for (auto it : m)
    {
        if (it.second > n / 2)
        {
            ans = it.first;
        }
        else
        {
            ans = -1;
        }
    }

    cout << ans << endl;

    return 0;
}