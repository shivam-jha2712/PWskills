#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int maximumProduct(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    int n = nums.size();
    int product = 1;

    for (int i = n - 1; i >= n - 3; i--)
    {
        product *= nums[i];
    }

    int otherprod = nums[n - 1] * nums[0] * nums[1]; // this is for the case when we have the first two elements be very great negative numbers and thus they would be used along side the last element

    return max(product, otherprod); // giving the max of both the outcomes
}

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the number of the vector: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    cout << "The maximum product of the three numbers will be: ";
    cout << maximumProduct(nums) << endl;

    return 0;
}