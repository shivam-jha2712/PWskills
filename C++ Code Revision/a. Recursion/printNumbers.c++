#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
vector<int> printNos(int x) {
    // Base case: if x is 0, return an empty vector
    if (x == 0) {
        return {};
    } else {
        // Recursively call the function with x-1
        vector<int> result = printNos(x - 1);
        // Print the current value of x
        // Add the current value to the result vector
        result.push_back(x);
        return result;
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cout << "Enter number to print in reverse: " << endl;
    cin >> n;

    // Call the function to get the reversed vector
    vector<int> reversedVector = printNos(n);

    // Print the reversed values
    cout << "The Reverse values of " << n << " are: ";
    for (int num : reversedVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
