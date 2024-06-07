#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Defination of Median is the the mean of the mid two terms of the sorted array
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
    // As a step 1 sort the vector
    sort(v.begin(), v.end());

    // Then find the middle two elements and then find its mean and that would be the median
    int lo = 0;
    int hi = v.size();

    int mid = lo + (hi - lo) / 2;

    double sum = 0;

    if (v.size() % 2 == 0)
    {
        sum = v[mid] + v[mid - 1];
        cout << fixed << setprecision(1) << sum / 2 << endl;
    }
    else
    {
        cout << v[mid] << endl;
    }

    return 0;
}