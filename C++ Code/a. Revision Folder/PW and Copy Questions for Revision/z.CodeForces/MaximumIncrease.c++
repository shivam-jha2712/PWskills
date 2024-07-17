#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n == 0)
    {
        cout << "0" << endl;
        return 0;
    }

    int length = 1;
    int max_length = 1;

    for (int i = 0; i < n - 1; i++)
    { // Loop until n-1 to avoid out-of-bounds access
        if (v[i + 1] > v[i])
        {
            length++;
        }
        else
        {
            max_length = max(length, max_length);
            length = 1;
        }
    }

    max_length = max(length, max_length); // Update max_length after the loop

    cout << max_length << endl;

    return 0;
}
