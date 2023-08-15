#include <iostream>
using namespace std;
void toggle(int &n)
{
    int temp = 1;
    while (temp <= n)
    {
        n = n ^ temp;
        temp = temp << 1;
    }
}
int main()
{
    int n;
    cin >> n;
    if (n <= 100)
    {
        toggle(n);
        cout << n;
    }
    else
        cout << "Wrong Input";
    return 0;
}

/*
Q2. Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit
assignment problems before the lecture. Today, he got one tricky question. The problem statement is “A
positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits
of it after the most significant bit including the most significant bit. Print the positive integer value after
toggling all bits”.

Constraints
1 <=N <=100
Example 1
Input:
10 ---> Integer
Output:
5 → result - Integer
Explanation:
Binary representation of 10 is 1010. After toggling the bits (1010), will get 0101, which represents “5”.
Hence the output will print “5”.
Example 2
Input:
101 ---> Integer
Output:
Wrong input → result - String
Explanation:
Given integer “101” is out of range. Hence the output will print “Wrong input”.
The input format for testing
The candidate has to write the code to accept one input(s).
1. First Input - First line contains an integer
The output format for testing
1. Print integer value based on the number got after toggling all the bits of given input.
2. Print “Wrong input if the string length is out of the range.
3. Additional messages in output will cause the failure of test cases.
Instructions
1. The system doesn’t allow any kind of hard-coded input value.
2. Written program code by the candidate will be verified against all the inputs which are supplied from
the system.

*/