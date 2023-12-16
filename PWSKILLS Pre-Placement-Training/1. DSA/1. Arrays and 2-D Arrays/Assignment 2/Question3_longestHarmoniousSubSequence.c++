/*
Question 3
We define a harmonious array as an array where the difference between its maximum value
and its minimum value is exactly 1.

Given an integer array nums, return the length of its longest harmonious subsequence
among all its possible subsequences.

A subsequence of an array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

Example 1:
Input: nums = [1,3,2,2,5,2,3,7]
Output: 5

Explanation: The longest harmonious subsequence is [3,2,2,2,3].
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int findLHS(vector<int> &nums)
    {
        int longestSubsequence = 0;

        // Sort the array in non-decreasing order
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = 0;

        while (right < nums.size())
        {
            int diff = nums[right] - nums[left];

            // Move the right pointer until the difference is less than or equal to 1
            if (diff <= 1)
            {
                right++;

                // Update the longest subsequence length if necessary
                if (diff == 1 && right - left > longestSubsequence)
                {
                    longestSubsequence = right - left;
                }
            }
            // Move the left pointer if the difference is greater than 1
            else
            {
                left++;
            }
        }

        return longestSubsequence;
    }
};

int main()
{
    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};

    Solution solution;
    int longestLength = solution.findLHS(nums);

    cout << "Longest Harmonious Subsequence Length: " << longestLength << endl;

    return 0;
}
