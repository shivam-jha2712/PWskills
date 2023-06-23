/*
Question 8
You are given an integer array nums and an integer k.

In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

The score of nums is the difference between the maximum and minimum elements in nums.

Return the minimum score of nums after applying the mentioned operation at most once for each index in it.

Example 1:
Input: nums = [1], k = 0
Output: 0

Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.
*/

#include <vector>
#include <algorithm>

class Solution
{
public:
    int minDifference(std::vector<int> &nums, int k)
    {
        int n = nums.size();

        if (n <= k)
        {
            return 0;
        }

        std::sort(nums.begin(), nums.end());

        int minScore = nums[n - 1] - nums[0];

        for (int i = 0; i <= k; i++)
        {
            minScore = std::min(minScore, nums[n - k + i - 1] - nums[i]);
        }

        return minScore;
    }
};

int main()
{
    std::vector<int> nums = {1};
    int k = 0;

    Solution solution;
    int minScore = solution.minDifference(nums, k);

    std::cout << "Minimum Score: " << minScore << std::endl;

    return 0;
}
