#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int factorial(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    cout << "The Arrangement around the Circular table will be : ";
    cout << factorial(n - 1) << endl;
    return 0;
}