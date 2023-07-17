#include <iostream>
#include <algorithm>
using namespace std;

string addStrings(string num1, string num2)
{
    string result = "";
    int carry = 0;
    int i = num1.size() - 1, j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        result += (digit + '0');

        i--;
        j--;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    string num1 = "11";
    string num2 = "123";

    string sum = addStrings(num1, num2);

    // Print the sum
    cout << sum << endl;

    return 0;
}
