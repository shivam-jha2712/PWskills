#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int findTargetIndex(vector<int> nums, int target)
{
    int lo = 0;
    int hi = nums.size() - 1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] < target)
        {
            lo = mid + 1;
        }
        else if (nums[mid] > target)
        {
            hi = mid - 1;
        }
        else
        {
                return mid;
        }
    }
    return lo;
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

    int targetIndex = findTargetIndex(numbers, target);
    cout << "Target index: " << targetIndex << endl;

    return 0;
}