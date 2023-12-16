#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void freq(vector<int> v, int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[v[i]]++;

    for (auto it : map)
        cout << it.first << " " << it.second << endl;
}

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

    freq(v, n);

    return 0;
}