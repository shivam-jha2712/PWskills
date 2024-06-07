#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return 0;
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

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime number" << endl;
    }
    else
    {
        cout << "Not Prime number" << endl;
    }
    return 0;
}