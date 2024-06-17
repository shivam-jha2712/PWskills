#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINITION
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int currentAltitude = 0; // Starting altitude is 0
    int maxAltitude = 0; // Initialize the maximum altitude with the starting altitude

    for (int i = 0; i < n; i++)
    {
        currentAltitude += v[i];
        maxAltitude = max(maxAltitude, currentAltitude);
    }

    cout << maxAltitude << endl;

    return 0;
}
