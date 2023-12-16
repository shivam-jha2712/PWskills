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

    cout << "Number of Distinct Elements are: " << m.size() << endl;
    cout << "And the Distinct Elements are: " << endl;

    for (auto itr : m)
    {
        cout << itr.first << endl;
    }

    return 0;
}