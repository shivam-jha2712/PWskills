#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n;
        cin >> n; // Read number of columns

        string row1, row2;
        cin >> row1 >> row2; // Read the two rows

        // Transform both rows
        for (int i = 0; i < n; i++) {
            if (row1[i] == 'G' || row1[i] == 'B') {
                row1[i] = 'X'; // Treat 'G' and 'B' as the same
            }
            if (row2[i] == 'G' || row2[i] == 'B') {
                row2[i] = 'X'; // Treat 'G' and 'B' as the same
            }
        }

        // Compare the transformed rows
        if (row1 == row2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
