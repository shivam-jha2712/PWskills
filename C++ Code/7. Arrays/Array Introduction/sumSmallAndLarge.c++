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
        cin >> arr[i]; // input the data in ascending order;
        // As sorting would be done later

        sort(arr, arr + n);
        // Or if you are using sort function then you don't need to enter it in
        // ascending order
    }
    cout << arr[0] + arr[n - 1];
    return 0;
}
