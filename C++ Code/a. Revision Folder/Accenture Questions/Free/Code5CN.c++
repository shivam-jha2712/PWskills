/*
For writing numbers, there is a system called N-base notation. This system uses only N-based symbols. It uses symbols that are listed as the first n symbols. Decimal and n-based notations are 0:0, 1:1, 2:2, …, 10:A, 11:B, …, 35:Z.

Perform the function: Chats DectoNBase(int n, int num)

This function only uses positive integers. Use a positive integer n and num to find out the n-base that is equal to num.

Steps

Select a decimal number and divide it by n. Consider this as an integer division.
Denote the remainder as n-based notation.
Again divide the quotient by n.
Repeat the above steps until you get a 0 remainder.
The remainders from last to first are the n-base values.

Assumption
1 < n < = 36

Example

Input:
N: 12
Num: 718

Output:
4BA

Explanation

num	Divisor	Quotient	Remainder
718	    12	    59  	10(A)
59	    2	    4	    11(B)
4	    12	    0	    4(4)

Sample input:
N: 21
Num: 5678

Sample output:
CI8

*/

#include <bits/stdc++.h>
using namespace std;

string DectoNBase(int n, int num)
{
    string temp = "";
    while (num > 0)
    {
        int remainder = num % n;
        if (remainder >= 0 && remainder <= 9)
        {
            temp.push_back('0' + remainder);
        }
        else
        {
            char c = 'A' + remainder - 10;
            temp.push_back(c);
        }
        num /= n;
    }
    reverse(temp.begin(), temp.end()); // Reverse the string to get the correct order
    return temp;
}

int main()
{
    int n, num;
    cin >> n >> num;

    cout << DectoNBase(n, num) << endl;
    return 0;
}
