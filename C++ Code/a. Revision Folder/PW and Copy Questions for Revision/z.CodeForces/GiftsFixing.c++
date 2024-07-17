#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> candies(n);
        vector<int> oranges(n);

        for (int i = 0; i < n; i++) {
            cin >> candies[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> oranges[i];
        }

        int minCandies = *min_element(candies.begin(), candies.end());
        int minOranges = *min_element(oranges.begin(), oranges.end());

        long long totalMoves = 0;

        for (int i = 0; i < n; i++) {
            int candyDiff = candies[i] - minCandies;
            int orangeDiff = oranges[i] - minOranges;
            totalMoves += max(candyDiff, orangeDiff);
        }

        cout << totalMoves << endl;
    }

    return 0;
}
