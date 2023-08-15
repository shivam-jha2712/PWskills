
#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements of Array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    // printing first half in ascending order
    for (int i = 0; i < n / 2; i++)
        cout << v[i] << " "; // printing second half in descending order
    for (int j = n - 1; j >= n / 2; j--)
        cout << v[j] << " ";

    return 0;
}