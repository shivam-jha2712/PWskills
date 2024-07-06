#include <bits/stdc++.h> // HEADER FILE

using namespace std;

vector<int> squareSortedArray(vector<int> v, int size)
{
    int lo = 0;
    int hi = size - 1;

    vector<int> ans;

    while (lo <= hi)
    {
        if (abs(v[lo]) < abs(v[hi]))
        {
            ans.push_back(pow(v[hi], 2));
            hi--;
        }
        else
        {
            ans.push_back(pow(v[lo], 2));
            lo++;
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> ans = squareSortedArray(v, n);

    cout << "Required Sorted Array : " << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}