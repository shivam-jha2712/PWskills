/*
6. Execute the function for the given purpose.
When the sum of the digits exceeds a total of 9, a carry digit is added to the right-left of the digit. Execute the function: Int Numberofcarry(Integer num 1, Integer num 2)

Assumption

num1, num2 > = 0

Example

Input:
num1: 451
num2: 349

Output:
2

Explanation

When we add these two numbers from the right to the left, we get two carries. The value of each of the carries is 1. Hence, the output is the total of these two carries, i.e., 2.

Sample input:
num1: 23
num2: 563

Sample output:
0
*/

#include <bits/stdc++.h>
using namespace std;

int Numberofcarry(int num1, int num2)
{
    int carry = 0;
    int countCarry = 0;

    while (num1 > 0 || num2 > 0)
    {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;

        int sum = digit1 + digit2 + carry;
        if (sum > 9)
        {
            carry = 1;
            countCarry++;
        }
        else
        {
            carry = 0;
        }

        num1 /= 10;
        num2 /= 10;
    }

    return countCarry;
}

int main()
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int num1, num2;
    cin >> num1 >> num2;

    cout << Numberofcarry(num1, num2) << endl;

    return 0;
}
