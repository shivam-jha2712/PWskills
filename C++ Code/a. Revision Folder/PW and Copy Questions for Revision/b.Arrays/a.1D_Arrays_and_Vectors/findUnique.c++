#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] != v[i - 1] && v[i] != v[i + 1])
        {
            cout << "The given unique element is : " << v[i] << endl;
        }
    }

    return 0;
}