#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> v(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < 5; i++)
        {
            v[0]++;
            sort(v.begin(), v.end());
        }

        cout << v[0] * v[1] * v[2] << endl;
    }

    return 0;
}