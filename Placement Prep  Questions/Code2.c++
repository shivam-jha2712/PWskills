#include <bits/stdc++.h> // HEADER FILE

using namespace std;

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

    sort(arr, arr + n);
    int sum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
    if (sum == arr[n - 1])
    {
        cout << sum << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}