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

    map<int, int> m;

    for (auto it : v)
    {
        m[it]++;
    }

    cout << "Repeating Elements are: " << endl;

    for (auto itr : m)
    {
        if (itr.second > 1)
            cout << itr.first << endl;
    }

    return 0;
}