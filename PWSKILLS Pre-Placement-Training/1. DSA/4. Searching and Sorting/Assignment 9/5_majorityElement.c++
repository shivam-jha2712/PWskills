#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int findMajorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n / 2];
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

    int majorityElement = findMajorityElement(numbers);
    cout << "Majority Element: " << majorityElement << endl;

    return 0;
}