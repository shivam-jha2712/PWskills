#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int t, min_steal = 0;
    cin >> t;
    int array[t];
    for (int i = 0; i < t; i++)
    {
        cin >> array[i];
    }

    int k;
    cin >> k;

    sort(array, array + t);

    for (int i = 0; i < k; i++)
    {
        min_steal += array[i];
    }

    cout << min_steal << endl;
    return 0;
}