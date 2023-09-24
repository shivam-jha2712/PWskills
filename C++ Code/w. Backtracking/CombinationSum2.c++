#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<int>> result;

    // Recursive function for finding the vectors that sum equal to target: thus, arr and idx
    void findCombinations(vector<int> &c, int idx, int t, vector<int> &v)
    {
        if (t == 0)
        {
            result.push_back(v); // Push back the target if found upon successive calls.
            return;              // Push back and then return.
        }

        // If upon all the movements we land at the end of the vector, we return simply.
        if (idx == c.size())
            return;

        // Condition to make a pick;
        if (c[idx] <= t)
        {
            // When the value at idx is either less or equal to the target, then we pick and push.
            v.push_back(c[idx]);
            // And then we also move forward, reduce the target as well, and then call recursively.
            findCombinations(c, idx + 1, t - c[idx], v);
            // Also, just in case we find a solution and then go for another solution, we need to take care of making the second possible thus, reverting it back. ie: backtracking.
            v.pop_back();
        }

        // Condition of Not Pick
        int j = idx + 1; // On not picking, simply move forward.
        while (j < c.size() && c[j] == c[j - 1])
        {
            j++; // This is for taking care of the duplicates.
        }
        // On not picking, everything remains the same except the idx which moves one step.
        findCombinations(c, j, t, v);
    }

    // Function to find combinations of elements in 'candidates' that sum to 'target'
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        result.clear();                             
        // Clear the 'result' vector to ensure it's empty before finding combinations.
        sort(candidates.begin(), candidates.end()); 
        // Sort the 'candidates' vector in ascending order.
        vector<int> v; 
        // Create an empty vector 'v' to store a single combination temporarily.

        // Call the 'findCombinations' recursive function to find valid combinations.
        findCombinations(candidates, 0, target, v);

        return result; // Return the vector containing all valid combinations.
    }
};

int main()
{
    Solution solution;
    vector<int> candidates = {10, 1, 2, 7, 6, 5};
    int target = 8;
    vector<vector<int>> combinations = solution.combinationSum2(candidates, target);

    // Print the combinations
    for (const vector<int> &combination : combinations)
    {
        for (int num : combination)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
