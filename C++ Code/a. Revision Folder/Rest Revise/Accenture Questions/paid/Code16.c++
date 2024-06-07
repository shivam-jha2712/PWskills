#include <bits/stdc++.h>
using namespace std;

int secondHighest(vector<int> v)
{
    int n = v.size();
    sort(v.begin(), v.end());
    return v[n - 2];
}

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << secondHighest(v);

    return 0;
}