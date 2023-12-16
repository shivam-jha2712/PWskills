/*
162. Find Peak Element -> Medium

A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
private:
    // Helper function to find the peak element using binary search
    int findPeak(vector<int> &nums, int lo, int hi)
    {
        // Base case: When lo and hi are equal, it means a peak element is found
        if (lo == hi)
        {
            return lo;
        }

        // Calculate the middle index
        int mid = lo + (hi - lo) / 2;

        // Check the neighboring elements to determine the direction of the peak
        if (nums[mid] > nums[mid + 1])
        {
            // If the middle element is greater than the next element, the peak is likely in the left half
            return findPeak(nums, lo, mid);
        }
        else
        {
            // If the middle element is smaller than the next element, the peak is likely in the right half
            return findPeak(nums, mid + 1, hi);
        }
    }

public:
    int findPeakElement(vector<int> &nums)
    {
        int lo = 0;
        int hi = nums.size() - 1;

        // Start the binary search to find the peak element
        return findPeak(nums, lo, hi);
    }
};

int main()
{
    // Read input from the user
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Create an instance of the Solution class
    Solution solution;

    // Find the peak element
    int peakIndex = solution.findPeakElement(nums);

    // Output the result
    cout << "Peak element index: " << peakIndex << endl;

    return 0;
}
