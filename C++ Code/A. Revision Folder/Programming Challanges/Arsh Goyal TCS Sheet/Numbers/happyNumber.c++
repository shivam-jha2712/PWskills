#include <iostream>
using namespace std;

bool isHappy(int n)
{
    while (n > 9)
    {                // Continue the loop until 'n' is a single-digit number (less than or equal to 9)
        int sum = 0; // Initialize a variable to store the sum of squares of digits
        int m = n;   // Create a temporary variable to store the value of 'n'

        while (m > 0)
        {                   // Loop to calculate the sum of squares of digits of 'm'
            int a = m % 10; // Extract the last digit of 'm'
            sum += (a * a); // Add the square of the digit to the sum
            m /= 10;        // Remove the last digit from 'm'
        }

        n = sum; // Assign the sum of squares of digits to 'n' for the next iteration
    }

    // Check if the final value of 'n' is 1 or 7 (happy number property)
    if (n == 1 || n == 7)
    {
        return true; // Return true if 'n' is a happy number
    }
    return false; // Return false if 'n' is not a happy number
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isHappy(number))
    {
        cout << number << " is a happy number." << endl;
    }
    else
    {
        cout << number << " is not a happy number." << endl;
    }

    return 0;
}
