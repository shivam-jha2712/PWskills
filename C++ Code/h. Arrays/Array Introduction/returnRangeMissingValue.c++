#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int solve(int arr[], int n)
{
    int missing = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int range_sum = (n) * (n + 1) / 2;
    missing = range_sum - sum;
    cout << missing << endl;
    return missing;
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