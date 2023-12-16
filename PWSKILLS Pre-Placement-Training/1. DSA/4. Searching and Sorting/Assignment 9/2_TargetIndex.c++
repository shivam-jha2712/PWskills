#include <bits/stdc++.h> // HEADER FILE

using namespace std;

vector<int> targetIndex(vector<int> nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    vector<int> ans = {-1, -1};

    // Finding the starting Position
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            // If First target is found update the start position
            ans[0] = mid;
            right = mid - 1; // continue to search in the left part
        }
    }

    // Find the end position
    left = 0;
    right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            // If First target is found update the end position
            ans[1] = mid;
            left = mid + 1; // continue to search in the right part
        }
    }

    // Returning the answer
    return ans;
}

int main()
{
    // Read the array from user input
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    // Read the target from user input
    int target;
    cout << "Enter the target: ";
    cin >> target;

    // Find the indices of the two numbers
    vector<int> indices = targetIndex(numbers, target);

    // Print the indices
    cout << "[" << indices[0] << ", " << indices[1] << "]" << endl;

    return 0;
}