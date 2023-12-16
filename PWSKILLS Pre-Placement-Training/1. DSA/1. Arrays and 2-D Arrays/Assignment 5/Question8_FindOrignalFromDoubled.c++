#include <bits/stdc++.h> // HEADER FILE

using namespace std;

vector<int> findOriginalArray(vector<int> changed)
{
    int n = changed.size();
    vector<int> result = {};

    if (n % 2 != 0)
    {
        return {};
    }

    // Some function -

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
         if ((changed[i] == 2 * changed[j]) || (changed[i] == changed[j] / 2))
            {
                result.push_back(changed[i]);
            }
        }
    }

    return result;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> changed = findOriginalArray(v);

    for (int i = 0; i < changed.size(); i++)
    {
        cout << changed[i] << " ";
    }

    return 0;
}