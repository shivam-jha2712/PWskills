#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool checkPrefix(vector<int> v)
{
    int n = v.size();
    bool flag = false;
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += v[i];
    }

    int prefixSum = 0;

    for (int i = 0; i < n; i++)
    {
        prefixSum += v[i];
        int suffixSum = totalSum - prefixSum;

        if (prefixSum == suffixSum)
        {
            flag = true;
            break;
        }
    }

    return flag;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << checkPrefix(v);

    return 0;
}
