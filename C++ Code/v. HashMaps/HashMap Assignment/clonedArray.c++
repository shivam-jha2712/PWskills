#include <bits/stdc++.h>
using namespace std;

bool equalArray(vector<int> a, vector<int> b)
{
    unordered_map<int, int> m;
    for (int i : a) // for each element in vector a we store its frequency in map
    {
        m[i]++;
    }
    for (int i : b) // and for each element in vector b we reduce its frequncy from the map if present
    {
        m[i]--;
    }
    for (auto i : m) // After the above two process if the frequency count is not zero at any point in the  map then it would result false
    // Else it will return true;
    {
        if (i.second != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    vector<int> v1(n), v2(n);
    cout << "arr1 = ";
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    cout << "arr2 = ";
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    cout << "Two arrays are equal? " << (equalArray(v1, v2) ? "Yes" : "No");

    return 0;
}