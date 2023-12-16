#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cout << "Enter Sizes of Vectors: " << endl;
    cin >> n >> m;

    vector<int> v1(n);
    vector<int> v2(m);

    cout << "Enter Elements for v1: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    cout << "Enter Elements for v2: " << endl;
    for (int j = 0; j < m; j++)
    {
        cin >> v2[j];
    }

    int ans = 0;

    set<int> s1;
    for (auto it : v1)
    {
        s1.insert(it);
    }
    for (auto ele : v2)
    {
        if (s1.find(ele) != s1.end())
        {
            ans += ele;
        }
    }

    cout << ans;

    return 0;
}
