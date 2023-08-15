#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
bool isPrime(int n)
{
    int count = 0;

    // 0, 1 negative numbers are not prime
    if (n < 2)
        return false;

    // A number n is not a prime, if it can be factored into two factors a & b:
    // n = a * b

    /*Now a and b can't be both greater than the square root of n, since
    then the product a * b would be greater than sqrt(n) * sqrt(n) = n.
    So in any factorization of n, at least one of the factors must be
    smaller than the square root of n, and if we can't find any factors
    less than or equal to the square root, n must be a prime.
    */
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    // if reached here then must be true
    return true;
}

int main()
{
    int lower, upper;

    lower = 1, upper = 100;

    for (int i = lower; i <= upper; i++)
        if (isPrime(i))
            cout << i << " ";
}
// Time Complexity : O(N√N)
// Space Complexity : O(1)