#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int thresholdScore = scores[k-1];
    int advancingParticipants = 0;

    for (int i = 0; i < n; ++i) {
        if (scores[i] >= thresholdScore && scores[i] > 0) {
            ++advancingParticipants;
        }
    }

    cout << advancingParticipants << endl;
    return 0;
}
