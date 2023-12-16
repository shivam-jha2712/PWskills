#include <iostream>
#include <vector>
using namespace std;

// Function to find the lower bound index of the target in the sorted input array
int lowerBound(vector<int> &input, int target)
{
    int lo = 0;
    int hi = input.size() - 1;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] >= target)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}

// Function to find the upper bound index of the target in the sorted input array
int upperBound(vector<int> &input, int target)
{
    int lo = 0;
    int hi = input.size() - 1;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] > target)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}

int main()
{
    // Disable synchronization between C and C++ standard streams
    ios_base::sync_with_stdio(false);
    // Untie cin and cout for faster I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> input(n);

    for (int i = 0; i < n; i++)
    {
        cin >> input[i]; // Store input values in the vector
    }

    int target;
    cin >> target;

    vector<int> result;

    int lb = lowerBound(input, target); // Find lower bound index

    // Check if the target is present in the input array
    if (lb == -1 || input[lb] != target)
    {
        // If not present, push -1 twice into the result vector
        result.push_back(-1);
        result.push_back(-1);
    }
    else
    {
        int ub = upperBound(input, target); // Find upper bound index

        // Push lower bound index and upper bound index - 1 into the result vector
        result.push_back(lb);
        result.push_back(ub - 1);
    }

    cout << result[0] << " " << result[1] << endl; // Print the result

    return 0;
}
