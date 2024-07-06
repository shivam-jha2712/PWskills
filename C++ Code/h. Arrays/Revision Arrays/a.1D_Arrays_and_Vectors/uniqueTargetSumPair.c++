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

    int target;
    cin >> target;

    int targetPairs = 0;

    int lo = 0;
    int hi = n - 1;

    while (lo < hi)
    {
        if (v[lo] + v[hi] == target)
        {
            targetPairs++;
            lo++;
            hi--;
        }
        else if (v[lo] + v[hi] < target)
        {
            lo++;
        }
        else
        {
            hi--;
        }
    }

    cout << "Count of Unique Pairs of Target : " << targetPairs << endl;

    return 0;
}