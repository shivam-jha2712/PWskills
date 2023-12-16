/*
💡 **Q4.** You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

**Example 1:**
Input: digits = [1,2,3]
Output: [1,2,4]

**Explanation:** The array represents the integer 123.

Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    // Start from the least significant digit
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        // Increment the current digit by 1
        digits[i]++;

        // If the digit is less than 10, no carry is needed
        if (digits[i] < 10)
        {
            return digits;
        }

        // If the digit is 10, set it to 0 and carry over to the next digit
        digits[i] = 0;
    }

    // dealing with carry over
    // If all digits are 9, a new digit 1 needs to be added at the front
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> digits(n);

    for (int i = 0; i < n; i++)
    {
        cin >> digits[i];
    }

    vector<int> result = plusOne(digits);

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}