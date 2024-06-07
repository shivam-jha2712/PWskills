#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// This is itself also known as eucledian algorithm
int gcdFunction(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return (b, a % b);
    }
}

int main() // MAIN DEFINATION
{

    int a, b;
    cin >> a >> b;

    cout << ((a) / gcdFunction(a, b)) * b;
    // Since the formula for LCM is (a/gcd(a,b))*b;
    return 0;
}

// TC - O(log(min(a,b)))