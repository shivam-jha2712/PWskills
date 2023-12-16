/*

💡 **Question 1**
Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2),..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.

**Example 1:**
Input: nums = [1,4,3,2]
Output: 4

**Explanation:** All possible pairings (ignoring the ordering of elements) are:

1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3
2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3
3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
So the maximum possible sum is 4


Question nO: 561 - Array Partition 1
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arrayPairSum(vector<int> &nums)
{
    // Sort the input array
    sort(nums.begin(), nums.end());

    int sum = 0;
    // Iterate through the sorted array and add the minimum element of each pair
    for (int i = 0; i < nums.size(); i += 2)
    {
        sum += nums[i];
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n); //  {1, 4, 3, 2};

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int maxSum = arrayPairSum(nums);

    cout << "Maximized sum: " << maxSum << endl;

    return 0;
}
