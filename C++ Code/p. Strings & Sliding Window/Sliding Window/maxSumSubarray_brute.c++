#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int maxSumSubarray(vector<int> v, int x)
{
    int n = v.size();
    int maxSum = INT_MIN;

    for (int i = 0; i <= n - x; i++)
    {
        int sum = 0;
        for (int j = i; j < i + x; j++)
        {
            sum += v[j];
        }
        maxSum = max(maxSum, sum);
    }

    return maxSum;
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

    int x;
    cin >> x;

    cout << maxSumSubarray(v, x) << endl;

    return 0;
}