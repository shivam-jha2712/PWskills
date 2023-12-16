/*
Question 7
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is
monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Example 1:
Input: nums = [1,2,2,3]
Output: true
*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isMonotonic(vector<int> &nums)
{
    int n = nums.size();
    bool isIncreasing = true; // Flag to track if the array is monotonic increasing
    bool isDecreasing = true; // Flag to track if the array is monotonic decreasing

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < nums[i - 1])
            isIncreasing = false; // If a decreasing element is found, array is not monotonic increasing

        if (nums[i] > nums[i - 1])
            isDecreasing = false; // If an increasing element is found, array is not monotonic decreasing

        if (!isIncreasing && !isDecreasing)
            break; // Break out of the loop if both flags are false, indicating array is neither increasing nor decreasing
    }

    return isIncreasing || isDecreasing; // Return true if array is either monotonic increasing or monotonic decreasing
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

    if (isMonotonic(v))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}