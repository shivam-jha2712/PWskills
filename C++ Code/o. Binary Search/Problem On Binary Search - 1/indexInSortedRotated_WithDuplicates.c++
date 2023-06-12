#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &a, int target)
{
    int n = a.size(), low = 0, high = n - 1;

    if (a[low] == target)
    {
        return true;
    }

    // reduce the size of array to be searched
    while (low <= high && a[low] == a[high])
    {
        low++;
        high--;
    }
    if (low > high)
    {
        return false;
    }

    int newStart = low, newEnd = high; // updating boundaries of array

    // find the pivot
    int pivot = newEnd + 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] <= a[newEnd])
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
    if (a[newEnd] < target)
    {
        low = newStart;
        high = pivot - 1;
    }
    else
    {
        low = pivot;
        high = newEnd;
    }

    // apply binary search
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == target)
        {
            return true;
        }
        else if (a[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return false;
}

int main()
{
    vector<int> a = {0, 0, 0, 1, 1, 1, 2, 0, 0, 0};
    int target = 2;
    cout << search(a, target);

    return 0;
}
