#include <bits/stdc++.h>
#include <iostream> // HEADER FILE

using namespace std;

// 7 2 3 4 5 6 - Rotated sorted array (ans  = 1)
// Mid  = 3(index - 2)

// since input[mid] < input[lo] thus, hi = mid - 1
// that will make hi = (index - 1)
// By 1st terminal condition and mid calculation we get the result index = 1

int findMinimunInSortedRotated(vector<int> &input)
{
    if (input.size() == 1)
        return input[0]; // if only one element is provided

    int lo = 0;
    int hi = input.size() - 1;

    // Check whether sorted already
    if (input[lo] < input[hi])
    {
        return input[lo];
    }

    // if not sorted already, then use binary search
    while (lo <= hi)
    {

        int mid = lo + (hi - lo) / 2;

        // Terminal Condition for immediate right and left
        if (input[mid] > input[mid + 1])
        {
            return mid + 1;
        }
        if (input[mid] < input[mid - 1])
        {
            return mid;
        }

        // Discarding the left and right if necessary conditions are not met.
        if (input[mid] > input[lo])
        {
            lo = mid + 1;
        }
        else
        {
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

    vector<int> input(n);
    for (int i = 0; i < n; i++)
    {
        cin >> input[i]; // Store input values in the vector
    }
    cout << findMinimunInSortedRotated(input) << endl;

    return 0;
}