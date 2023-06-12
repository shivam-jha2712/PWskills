#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &a, int target)
{
    // find the pivot
    int n = a.size(), low = 0, high = n - 1, pivot = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] <= a[n - 1])
        {
            pivot = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    // find the part to which given element belongs
    if (a[n - 1] < target)
    {
        low = 0, high = pivot - 1;
    }
    else
    {
        low = pivot, high = n - 1;
    }

    // apply binary search

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    vector<int> a = {5, 6, 7, 8, 1, 2, 3, 4};
    int target = 3;
    cout << search(a, target);

    return 0;
}
