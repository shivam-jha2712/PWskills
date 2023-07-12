#include <bits/stdc++.h> // HEADER FILE

using namespace std;

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
    // Sorting the array
    sort(v.begin(), v.end());

    // Finding mid to arrange decreasing
    int lo = 0;
    int hi = v.size();

    int mid = lo + (hi - lo) / 2;
    // Simply reverseing to arrange them backwards
    reverse(v.begin() + mid, v.end());

    // Printing the results
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}