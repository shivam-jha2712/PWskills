#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool isSumOfTwoPrimes(int n)
{
    if (isPrime(n) && isPrime(n - 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (isSumOfTwoPrimes(n))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}