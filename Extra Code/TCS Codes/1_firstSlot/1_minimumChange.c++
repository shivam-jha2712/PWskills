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

    int sum = 0, flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                v[i]++;
            }
            if (v[i] < 0)
            {
                flag = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    if (flag == 1 || n < v.size())
    {
        cout << "Wrong Input";
    }
    else
    {
        cout << sum << endl;
    }

    return 0;
}