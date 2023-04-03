#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;

    // As Fibbonaci series moves like - 0 1 1 2 3 5 8 13 21 34 ........
    // And since it is always the summation of the previous two terms 
    // Thus for the case of the 0th and 1st element we need to keep the special base condition such that it returns the number itself.

    // Also, Since recursion follows the base case, assumption and self work approach. It will give us the following

int fib(int n)
{
    // Base Case for 0 and 1
    if(n<= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    cout << fib(n) << endl;

    return 0;
}

// Here assumption is that it works fine for fib(n-1) and fib(n-2)

// Whereas the self work transforms the fact it will be a summation of the past two terms in the series thus, "fib(n) = fib(n-1) + fib(n-2)"