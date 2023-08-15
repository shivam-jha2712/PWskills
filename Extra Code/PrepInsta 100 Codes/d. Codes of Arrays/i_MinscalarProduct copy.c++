#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n, m;
    cout << "Enter size of Arrays : ";
    cin >> n >> m;

    vector<int> v1(n);
    vector<int> v2(m);

    cout << "Enter elements of Array1 : ";

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    cout << "Enter elements of Array2 : ";

    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v1[i] * v2[i];
    }

    cout << sum << endl;

    return 0;
}