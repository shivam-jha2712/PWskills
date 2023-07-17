#include <bits/stdc++.h> // HEADER FILE

using namespace std;

vector<int> targetSum(vector<int> nums, int target)
{
    vector<int> ans;

    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i+1; j < nums.size(); j++)
        {
            if(nums[i] + nums[j] == target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
            }
        }
    }
    return ans;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

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
    vector<int> indices = targetSum(numbers, target);

    // Print the indices
    cout << "[" << indices[0] << ", " << indices[1] << "]" << endl;

    return 0;
}