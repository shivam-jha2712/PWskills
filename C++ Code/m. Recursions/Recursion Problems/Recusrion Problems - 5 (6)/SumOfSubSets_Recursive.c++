#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void sumOfSubset(int *arr, int n, int idx, int sum, vector<int> &result)
{

    // Base Case: if the iteration crossed the length of the array then pudh back the sum in the result vector.
    if (idx == n)
    {
        result.push_back(sum);
        return;
    }

    sumOfSubset(arr, n, idx + 1, sum + arr[idx], result); // Pick the ith element in the sum
    sumOfSubset(arr, n, idx + 1, sum, result);            // Do not pick the ith element
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n = 3;
    int arr[] = {2, 4, 5};
    vector<int> result;

    sumOfSubset(arr, n, 0, 0, result);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}

// Input: 2 4 5
// Output: 0 2 4 5 6 7 9 11  (Not Necceseraily in Order)