#include <iostream>
#include <cmath>

bool isArmstrong(int number)
{
    int originalNumber = number;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++numDigits;
    }

    originalNumber = number;

    // Calculate the sum of each digit raised to the power of numDigits
    while (originalNumber != 0)
    {
        int digit = originalNumber % 10;
        sum += pow(digit, numDigits);
        originalNumber /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == number);
}

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isArmstrong(number))
    {
        std::cout << number << " is an Armstrong number." << std::endl;
    }
    else
    {
        std::cout << number << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
