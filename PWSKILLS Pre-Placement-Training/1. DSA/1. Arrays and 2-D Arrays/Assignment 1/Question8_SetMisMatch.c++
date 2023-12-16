/*
💡 **Q8.** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

**Example 1:**
Input: nums = [1,2,2,4]
Output: [2,3]

*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

vector<int> findMissing(vector<int> &nums)
{
    int n = nums.size();
    vector<int> freq(n + 1, 0);
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        freq[nums[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            ans.push_back(i); // Missing number
        }
        else if (freq[i] == 2)
        {
            ans.insert(ans.begin(), i); // Repeated number inserted at the beginning
        }

        if (ans.size() == 2)
        {
            break; // Both numbers found, no need to continue
        }
    }

    return ans;
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

    vector<int> result = findMissing(v);

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
