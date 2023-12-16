#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int fact(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}

/*
// For this challenge you will be determining the factorial for a given number.

#include <iostream>
using namespace std;

int FirstFactorial(int num) {

    int multiple = 1;

    // Multiply all the numbers descending from the argument
    // Example if 5 (5,4,3,2,1)
    for (num; num > 0; num--)
    {
        multiple *= num;
    }

    return multiple;
}

int main()
{
    cout << FirstFactorial(4);
    return 0;
}
*/