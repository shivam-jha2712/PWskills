#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int findPeakElement(vector<int> nums)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[mid + 1])
        {
            // Peak lies on the right side
            left = mid + 1;
        }
        else
        {
            // Peak lies on the left side or at mid
            right = mid;
        }
    }

    // 'left' or 'right' will be the index of the peak element
    return left;
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

    int peakIndex = findPeakElement(numbers);

    // Check if the peak index is valid
    if (peakIndex != -1)
    {
        cout << "Peak element found at index: " << peakIndex << endl;
    }
    else
    {
        cout << "No peak element found in the array." << endl;
    }

    return 0;
}