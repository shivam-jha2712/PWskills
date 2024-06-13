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

    int target;
    cin >> target;

    int countTargetPairs = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == target)
            {
                countTargetPairs++;
            }
        }
    }

    cout << "The Number of pairs sum to target : " << countTargetPairs << endl;

    return 0;
}