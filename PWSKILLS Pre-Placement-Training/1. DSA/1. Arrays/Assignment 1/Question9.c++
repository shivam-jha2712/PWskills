/*
Suppose we have 13 and its reverse is 31 both are prime, we can call it Emirp number, now suppose you have an array of numbers. The goal will be to find whether the number present in each position of the array is Emirp or not, if it is then no change will occur else we will find the closest prime number to the reversed number whose difference from the original number is non-negative.The closest prime number should be less than the reversed number. If none of the condition matches then we put zero as output.

Input Format

1st line will contain an integer T test case.
Next T lines will contain a single number N.

Constraints

N<=10000
T<=50
1 is not considered as a prime number.
In input 32 we when reverse it get 23 but we won't take 23 we will take prime number closest to that i.e 19

Output Format

T lines where each contains the solution according to the problem.

Sample Input 0

6
21
43
61
31
32
11
Sample Output 0

11
31
13
31
19
11
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int getClosestPrime(int num)
{
    int n = num - 1;
    while (n > 1)
    {
        if (isPrime(n))
            return n;
        n--;
    }
    return 0;
}

int isEmirp(int num)
{
    int num_rev = reverseDigits(num);
    if (isPrime(num_rev) && isPrime(num))
    {
        return num;
    }
    else
    {
        int closestPrime = getClosestPrime(num_rev);
        if (closestPrime == 0)
            return 0;
        else
            return closestPrime;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << isEmirp(v[i]) << endl;
    }

    return 0;
}
