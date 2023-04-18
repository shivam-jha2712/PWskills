#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int binarySearchRecursive(int arr[], int l, int r, int x)
{
    /*
    Time: O(logN)
    Space: O(logN)
    */

    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearchRecursive(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearchRecursive(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int result = binarySearchRecursive(arr, 0, n - 1, target);

    return 0;
}