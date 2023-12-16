#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = *max_element(a.begin(), a.end());

    vector<int> freq(mx + 1, 0);

    for (auto x : a)
    {
        freq[x]++;
    }
    int j = 0;
    for (int i = 0; i <= mx; i++)
    {
        while (freq[i]--)
        {
            a[j++] = i;
        }
    }

    for (auto x : a)
        cout << x << " ";
}