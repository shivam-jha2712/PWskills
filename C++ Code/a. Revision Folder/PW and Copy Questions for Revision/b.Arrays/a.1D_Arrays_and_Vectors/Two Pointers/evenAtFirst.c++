#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
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
    while (lo < hi)
    {
        if (v[lo] % 2 != 0)
        {
            swap(v[lo], v[hi]);
            hi--;
        }
        else
        {
            lo++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}