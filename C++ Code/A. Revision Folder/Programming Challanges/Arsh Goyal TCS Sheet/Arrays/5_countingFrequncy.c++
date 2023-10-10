#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter the vector elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Using map easy answer;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }

    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}