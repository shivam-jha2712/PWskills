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

    int k;
    cout << "Number of times to be reversed " << endl;
    cin >> k;

    int K = k - n;

    if (k > n)
    {
        reverse(v.begin(), v.end());
        reverse(v.begin(), v.begin() + K);
        reverse(v.begin() + K, v.end());
    }
    else
    {
        reverse(v.begin(), v.end());
        reverse(v.begin(), v.begin() + k);
        reverse(v.begin() + k, v.end());
    }

    cout << "After Reversal " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}