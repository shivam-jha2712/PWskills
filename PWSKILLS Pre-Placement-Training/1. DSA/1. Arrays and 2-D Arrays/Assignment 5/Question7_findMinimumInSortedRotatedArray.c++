/*

💡 **Question 7**

Suppose an array of length n sorted in ascending order is **rotated** between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

- [4,5,6,7,0,1,2] if it was rotated 4 times.
- [0,1,2,4,5,6,7] if it was rotated 7 times.

Notice that **rotating** an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of **unique** elements, return *the minimum element of this array*.

You must write an algorithm that runs in O(log n) time.

**Example 1:**

**Input:** nums = [3,4,5,1,2]

**Output:** 1

**Explanation:**

The original array was [1,2,3,4,5] rotated 3 times.


*/

#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> &nums)
{
    // Corner Case
    if (nums.size() == 1)
    {
        return nums[0];
    }

    int lo = 0;
    int hi = nums.size() - 1;

    // Check if array is rotated sorted or not
    if (nums[lo] < nums[hi])
    { // Array is not rotated
        return nums[lo];
    }

    // Array is rotated, perform binary search
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (nums[mid] > nums[hi])
        {
            lo = mid + 1; // Minimum element is in the right half
        }
        else
        {
            hi = mid; // Minimum element is in the left half or at mid
        }
    }

    return nums[lo]; // Return the minimum element
}

int main()
{
// Dry Run - {4, 5, 6, 7, 0, 1, 2};

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int minElement = findMin(nums);
    cout << "Minimum Element: " << minElement << endl;

    return 0;
}

 