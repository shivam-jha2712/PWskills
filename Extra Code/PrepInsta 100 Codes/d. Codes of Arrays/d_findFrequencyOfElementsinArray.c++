#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINITION
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements of Array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> m;

    for (auto it : v)
    {
        m[it]++; // Use 'it' directly to access the current element
    }

    for (auto itr : m)
    {
        cout << itr.first << " occurs " << itr.second << " times." << endl;
    }

    return 0;
}
