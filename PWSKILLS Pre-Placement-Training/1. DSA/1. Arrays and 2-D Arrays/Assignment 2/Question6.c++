#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int indexFound(vector<int> &v, int target)
{
    int n = v.size();

    int lo = 0;
    int hi = n - 1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (v[mid] == target)
        {
            return mid;
        }
        else if (v[mid] < target)
        {
            lo = mid + 1; // ignore the left part
        }
        else
        {
            hi = mid - 1; // ignore the right part
        }
    }

    return -1;
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

    int target;
    cin >> target;

    int ans = indexFound(v, target);
    cout << ans << endl;

    return 0;
}