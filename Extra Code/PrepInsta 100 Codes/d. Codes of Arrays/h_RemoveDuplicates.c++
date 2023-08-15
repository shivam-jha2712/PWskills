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

    set<int> s;

    for (auto it : v)
    {
        s.insert(it);
    }

    for (auto itr : s)
    {
        cout << itr << endl;
    }

    return 0;
}