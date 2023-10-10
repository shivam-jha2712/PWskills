#include <bits/stdc++.h> // HEADER FILE

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter size of the vector : ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the vector:  ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int target;
    cout << "Target : ";
    cin >> target;

    vector<int> ans = twoSum(v, target);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}