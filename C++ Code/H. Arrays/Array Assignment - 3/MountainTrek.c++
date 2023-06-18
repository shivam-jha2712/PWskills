#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int mountainTrek(vector<int> height)
{
    int maxAltitude = 0;
    int currentAltitude = 0;

    for (int i = 0; i < height.size(); i++)
    {
        currentAltitude += height[i];
        maxAltitude = max(maxAltitude, currentAltitude);
    }

    return maxAltitude;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int l, r;
    // cin >> l >> r;

    cout << mountainTrek(arr) << endl;

    return 0;
}