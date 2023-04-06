#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void f(int n)
{
    // Base case
    if (n < 1)
    {
        return;
    }
    // Go and print the first n-1 natural numbers --> Assumption
    f(n - 1);
    cout << n << endl;
    // Self work: Just call the function for (n-1) and print the value "n".
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n = 5;

    f(n);

    return 0;
}