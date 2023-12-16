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

    sort(v.begin(), v.end());

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(v[i]);
    }

    if (s.size() == 1)
    {
        cout << "Second Smallest Number: " << -1 << endl;
        cout << "Second Largest Number: " << -1 << endl;
    }
    else
    {
        auto it = s.begin();
        ++it;
        cout << "Second Smallest Number: " << *it << endl;

        it = s.end();
        --it;
        --it;
        cout << "Second Largest Number: " << *it << endl;
    }

    return 0;
}