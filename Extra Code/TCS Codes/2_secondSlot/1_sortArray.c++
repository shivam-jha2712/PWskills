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

    // sort(v.begin(), v.end();

// Normal Bubble sort
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(v[i] > v[j])
            {
            swap(v[i], v[j]);
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}