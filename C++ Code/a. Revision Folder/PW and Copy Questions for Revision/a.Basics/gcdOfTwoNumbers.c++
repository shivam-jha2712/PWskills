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

    int n, m;
    cin >> n >> m;

    cout << gcdFunction(n, m);
    return 0;
}