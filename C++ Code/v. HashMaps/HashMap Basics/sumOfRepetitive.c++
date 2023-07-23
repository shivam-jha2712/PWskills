// Find the sum of only the repetitive elements in the given array4
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

    // Creating a map to store the elements and their frequencies all together
    map<int, int> m;
    // Iterating over the vector to find the frequencies of each element and add them to the map
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }

    // Find the repetitive elements in the map and add them to the sum
    int sum = 0;

    //  using pair as pair : element, frequency
    for (auto pair : m)
    {
        if (pair.second > 1)
        {
            sum += pair.first;
        }
    }

    // Give the sum of repeated elements in the vector
    cout << "sum of  all repeated elements : " << sum << endl;

    return 0;
}

// Time Complexity - O(N)
// Space Complexity - O(N)