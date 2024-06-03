#include <iostream>
using namespace std;

// Function to generate the checkerboard pattern for a given size n
void generate_checkerboard(int n) {
    // Loop through each row
    	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			cout << (i / 2 + j / 2 & 1 ? '.' : '#');
		}
		cout << '\n';
	}	

}

int main() {
    // Input number of test cases
    int t;
    cin >> t;
    
    // Iterate through each test case
    while (t--) {
        // Input the value of n for the current test case
        int n;
        cin >> n;
        // Generate and output the checkerboard pattern for the current test case
        generate_checkerboard(n);
    }

    return 0;
}
