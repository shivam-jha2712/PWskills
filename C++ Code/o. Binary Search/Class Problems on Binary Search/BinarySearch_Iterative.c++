#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int binarySearch(vector<int> &input, int target)
{
    /*
    Time: O(logN)
    Space: O(1)
    */

    // Define the search space
    int lo = 0;            // start of search space
    int hi = input.size(); // end of search space

    while (lo <= hi)
    {
        // Calc mid point for the search
        int mid = (lo + hi) / 2;
        if (input[mid] == target)
            return mid;

        else if (input[mid] < target)
        {
            // Discard the left of mid
            lo = mid + 1;
        }
        else
        {
            // Discard the right of mid
            hi = mid - 1;
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

    cout << binarySearch(v, target);

    return 0;
}