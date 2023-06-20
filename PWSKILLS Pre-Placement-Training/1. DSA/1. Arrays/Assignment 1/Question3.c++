#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int findOccurence(vector<int> &ans, int target)
{
    int lo = 0;
    int hi = ans.size() - 1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (ans[mid] == target)
        {
            return mid;
        }
        else if (ans[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    return lo;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> largeInt(n);

    for (int i = 0; i < n; i++)
    {
        cin >> largeInt[i];
    }
    int target;
    cin >> target;

    cout << findOccurence(largeInt, target) << endl;

    return 0;
}