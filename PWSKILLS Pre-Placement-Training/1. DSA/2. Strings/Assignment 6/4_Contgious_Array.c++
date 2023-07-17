#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMaxLength(vector<int> &nums)
{
    int n = nums.size();
    int maxLength = 0;
    int count = 0;

    unordered_map<int, int> countMap;
    countMap[0] = -1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            count--;
        else
            count++;

        if (countMap.count(count) > 0)
            maxLength = max(maxLength, i - countMap[count]);
        else
            countMap[count] = i;
    }

    return maxLength;
}

int main()
{
    vector<int> nums = {0, 1};

    int maxLength = findMaxLength(nums);

    // Print the result
    cout << maxLength << endl;

    return 0;
}
