#include <iostream>
#include <vector>

using namespace std;

// Recursive function to find all permutations of a vector
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans; // To store the final permutations

    // Base Case: When the vector is empty, return an empty permutation
    if (nums.empty())
    {
        return {{}}; // Return an empty permutation
    }

    for (int j = 0; j < nums.size(); j++)
    {
        int current_element = nums[j]; // Select the current element
        nums.erase(nums.begin() + j);  // Remove the current element from the vector

        // Recursively generate permutations for the remaining elements
        vector<vector<int>> sub_permutations = permute(nums);

        // For each sub_permutation, insert the current element at the beginning
        for (vector<int> sub_permutation : sub_permutations)
        {
            sub_permutation.insert(sub_permutation.begin(), current_element);
            ans.push_back(sub_permutation); // Store the sub_permutation with the current element
        }

        nums.insert(nums.begin() + j, current_element); // Restore the original state by inserting the current element back
    }

    return ans; // Return the vector of permutations
}

int main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements of the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<vector<int>> ans = permute(nums);

    for (const vector<int> &perm : ans)
    {
        for (int num : perm)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
