/*
💡 **Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

**Example 1:**
Input: nums = [1,2,3,1]

Output: true

*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isDistinct(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < int(nums.size()) - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
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

    if (isDistinct(v))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}