#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        { // Corrected indexing
            cin >> a[i];
        }

        int favCube = a[f - 1]; // Index adjusted to 0-based

        sort(a.rbegin(), a.rend()); // Sort in non-increasing order

        // Check if favCube is in the top k elements
        bool isFavInTopK = false;
        for (int i = 0; i < k; i++)
        {
            if (a[i] == favCube)
            {
                isFavInTopK = true;
                break;
            }
        }

        if (isFavInTopK)
        {
            // Check if favCube value also appears in the remaining elements
            bool isFavBeyondTopK = false;
            for (int i = k; i < n; i++)
            {
                if (a[i] == favCube)
                {
                    isFavBeyondTopK = true;
                    break;
                }
            }
            if (isFavBeyondTopK)
            {
                cout << "MAYBE" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
