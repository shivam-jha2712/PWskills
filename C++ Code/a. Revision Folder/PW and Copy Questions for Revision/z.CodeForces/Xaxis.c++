#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    while (n--)
    {
        vector<int> v(3);
        int a = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        a = abs(v[0] - v[1]) + abs(v[1] - v[2]);

        cout << a << endl;
    }
    return 0;
}