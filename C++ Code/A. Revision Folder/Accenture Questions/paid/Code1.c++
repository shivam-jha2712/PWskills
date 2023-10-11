/*
Problem Statement:
You and Vaibhav are good friends. Vaibhav received gift cards from his cousin. His cousin is so mischievous that he mixed some forged gift cards with the genuine ones. Now, he wants to verify whether his gift card numbers are valid or not. You happen to be great at programming so he is asking for your help!

A valid gift card has the following characteristics:

► It must start with a 9, 8 or 6 .
► It must contain exactly 16 digits.
► It must only consist of digits (0-9).
► It may have digits in groups of 4, separated by one hyphen “-“.
► It must NOT use any other separator like ‘ ‘ , ‘_’, etc.
► It must NOT have 4 or more consecutive repeated digits.
*/

#include <iostream>
#include <string>

using namespace std;

bool isValidGiftCard(const string &cardNumber)
{
    if (cardNumber.length() != 16)
    {
        return false;
    }

    char firstDigit = cardNumber[0];
    if (firstDigit != '6' && firstDigit != '8' && firstDigit != '9')
    {
        return false;
    }

    bool hasConsecutiveRepeats = false;
    for (int i = 0; i < 13; ++i)
    {
        if (cardNumber[i] == cardNumber[i + 1] && cardNumber[i] == cardNumber[i + 2] && cardNumber[i] == cardNumber[i + 3])
        {
            hasConsecutiveRepeats = true;
            break;
        }
    }

    if (hasConsecutiveRepeats)
    {
        return false;
    }

    for (char c : cardNumber)
    {
        if (c < '0' || c > '9')
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string cardNumber;
    cout << "Enter the gift card number: ";
    cin >> cardNumber;

    if (isValidGiftCard(cardNumber))
    {
        cout << "Valid gift card!" << endl;
    }
    else
    {
        cout << "Invalid gift card." << endl;
    }

    return 0;
}
