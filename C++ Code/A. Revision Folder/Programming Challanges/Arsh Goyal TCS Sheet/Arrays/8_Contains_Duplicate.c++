#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter the vector elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Using map easy answer;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }

    int flag = 0;
    for (auto it : m)
    {
        if (it.second != 1)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "Duplicates";
    }
    else
    {
        cout << "No Duplicates";
    }

    return 0;
}