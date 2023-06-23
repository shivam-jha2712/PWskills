#include <bits/stdc++.h> // HEADER FILE

using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> duplicates;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int index = abs(nums[i]) - 1; // Calculate the index by taking the absolute value of the number and subtracting 1
        if (nums[index] < 0)
        {
            duplicates.push_back(index + 1); // If the number at the calculated index is negative, it means it has appeared before, so add it to the duplicates vector
        }
        else
        {
            nums[index] = -nums[index]; // Negate the number at the calculated index to mark its occurrence
        }
    }

    return duplicates; // Return the vector containing the duplicate numbers
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

    vector<int> ans = findDuplicate(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}

// DryRun -  [4,3,2,7,8,2,3,1]