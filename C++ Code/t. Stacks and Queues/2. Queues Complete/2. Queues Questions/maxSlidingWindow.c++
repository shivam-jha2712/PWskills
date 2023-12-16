#include <bits/stdc++.h> // HEADER FILE

using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq;   // Create a deque to store indices of elements in the current window
    vector<int> res; // Create a vector to store the maximum values in each sliding window

    // Step 1: Process the first window of width k
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && nums[dq.back()] < nums[i])
        {
            dq.pop_back(); // Remove indices of smaller elements from the back of the deque
        }
        dq.push_back(i); // Add the current index to the back of the deque
    }
    res.push_back(nums[dq.front()]); // The front of the deque contains the maximum element in the first window

    // Step 2: Process the remaining windows
    for (int i = k; i < nums.size(); i++)
    {
        int curr = nums[i];
        if (dq.front() == (i - k))
        {
            dq.pop_front(); // Remove the index of the element that is no longer in the current window
        }
        while (!dq.empty() && nums[dq.back()] < nums[i])
        {
            dq.pop_back(); // Remove indices of smaller elements from the back of the deque
        }
        dq.push_back(i);                // Add the current index to the back of the deque
        res.push_back(nums[dq.front()]); // The front of the deque contains the maximum element in the current window
    }

    return res; // Return the vector containing maximum values in each sliding window
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = maxSlidingWindow(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}