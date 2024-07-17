#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string exhibitName;
    cin >> exhibitName; // Read the input string

    char current = 'a'; // Start at 'a'
    int totalRotations = 0;

    for (char target : exhibitName) {
        int clockwiseDistance = abs(target - current);
        int counterclockwiseDistance = 26 - clockwiseDistance;

        // Add the minimum of the two distances
        totalRotations += min(clockwiseDistance, counterclockwiseDistance);

        // Update the current position to the target
        current = target;
    }

    cout << totalRotations << endl;
    return 0;
}
