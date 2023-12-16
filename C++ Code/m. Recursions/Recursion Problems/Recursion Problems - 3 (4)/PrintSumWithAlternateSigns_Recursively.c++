#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int printSum(int n)
{
    // Base Case: If n == 0 then sum would itself be 0
    if (n == 0)
    {
        return 0;
    }
    // Assume that it works fine of n-1 as an input argument
    else
    {
        // Self Work: Only ythinh we had to check was that if n % 2 == 0 then we would subtract it from the rest. And if n % 2 != 0 then we would add it to the rest
        if (n % 2 == 0)
        {
            return printSum(n - 1) + (-n);
        }
        else
        {
            return printSum(n - 1) + (n);
        }
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n = 5;

    cout << printSum(n);
    return 0;
}