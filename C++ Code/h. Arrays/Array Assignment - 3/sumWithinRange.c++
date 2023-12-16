#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int sumInRange(int arr[], int left, int right)
{
    int sum = 0;
    for (int i = left; i <= right; i++)
    {
        sum += arr[i];
    }
    return sum;
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

    int l, r;
    cin >> l >> r;

    cout << sumInRange(arr, l, r) << endl;

    return 0;
}