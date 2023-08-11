
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

    reverse(v.begin(), v.end());

    cout << "Reversed Array : ";

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}