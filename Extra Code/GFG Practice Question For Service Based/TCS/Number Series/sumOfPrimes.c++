// C++ program to check if a prime number
// can be expressed as sum of
// two Prime Numbers
#include <bits/stdc++.h>
using namespace std;

// Function to check whether a number
// is prime or not
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Function to check if a prime number
// can be expressed as sum of
// two Prime Numbers
bool isPossible(int N)
{
    // if the number is prime,
    // and number-2 is also prime
    if (isPrime(N) && isPrime(N - 2))
        return true;
    else
        return false;
}

// Driver code
int main()
{
    int n = 13;

    if (isPossible(n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
