#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int findDistance(vector<int> arr1, vector<int> arr2, int d)
{
    int distance = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        bool found = false;
        for (int j = 0; j < arr2.size(); j++)
        {
            if (abs(arr1[i] - arr2[j]) <= d)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            distance++;
        }
    }
    return distance;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;

    vector<int> u(n);
    vector<int> v(m);

    for (int i = 0; i < n; i++)
    {
        cin >> u[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    int d;
    cin >> d;

    int distance = findDistance(u, v, d);

    cout << "distance: " << distance << endl;
    return 0;
}