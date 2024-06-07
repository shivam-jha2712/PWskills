#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        cout << "Number is Perfect" << endl;
    }
    else
    {
        cout << "Number is Not Perfect" << endl;
    }

    return 0;
}