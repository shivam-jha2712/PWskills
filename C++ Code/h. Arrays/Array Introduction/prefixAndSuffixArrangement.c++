#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int solve(int arr[], int N)
{
    int prefix[N];
    int suffix[N];
    prefix[0] = INT_MIN;
    suffix[N - 1] = INT_MAX;
    for (int i = 1; i < N; i++)
    {
        prefix[i] = max(prefix[i - 1], arr[i - 1]);
    }
    for (int i = N - 2; i >= 0; i--)
    {
        suffix[i] = min(suffix[i + 1], arr[i + 1]);
    }
    for (int i = 0; i < N; i++)
    {
        if (prefix[i] < arr[i] && arr[i] < suffix[i])
        {
            return arr[i];
        }
    }
    return -1;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(arr, n);

    return 0;
}