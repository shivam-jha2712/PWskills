/*
Question 6
Given a non-empty array of integers nums, every element appears twice except
for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only
constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1
*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int singleNumber(vector<int> &nums)
{
    int result = 0;
    for (auto i : nums)
    {
        result = result ^ i; // since the XOR of each number with itself is 0
    }
    return result;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> digits(n);

    for (int i = 0; i < n; i++)
    {
        cin >> digits[i];
    }

    int result = singleNumber(digits);

    cout << result << endl;

    return 0;
}

/*
We apply the above observations :

1. Traverse the array and take the Bitwise XOR of each element.
2. Return the value.

Why does this work ??
Because , the elements with frequency=2 will result in 0. And then the only element with frequency=1 will generate the answer.
*/