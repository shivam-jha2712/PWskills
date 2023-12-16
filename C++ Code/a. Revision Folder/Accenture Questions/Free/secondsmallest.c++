#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    if (arr.size() > 1)
    {
        cout << arr[1] << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}