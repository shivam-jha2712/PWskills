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

    int k;
    cin >> k;

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k+1);
    reverse(v.begin() + k+1, v.end());

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}