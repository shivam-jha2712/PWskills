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

    int l, r;
    cin >> l >> r;

    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        sum += v[i];
    }

    cout << "The sum is : " << sum;
    return 0;
}