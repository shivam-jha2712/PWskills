#include <iostream>
#include <vector>

using namespace std;

vector<int> termsOfAP(int x) {
    vector<int> ans;

    for (int i = 1; i <= x+1; i++) {
        int digit = 3 * i + 2;
        if (digit % 4 != 0) {
            ans.push_back(digit);
        }
    }

    return ans;
}

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int n;
        cin >> n; // Read the value for the current test case

        vector<int> ans = termsOfAP(n);

        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl; // Add a newline after printing each sequence
    }

    return 0;
}
