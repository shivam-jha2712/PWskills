#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool checkSorted(vector<int> v)
{
    int n = v.size();

    if (n == 0 || n == 1)
    {
        return true;
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            return false;
        }
    }
    return true;
}

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

    cout << checkSorted(v);
    return 0;
}