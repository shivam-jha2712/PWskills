#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isHarshad(int n)
{
    int original = n;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    if (original % sum == 0)
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

    if (isHarshad(n))
    {
        cout << "Harshad Number" << endl;
    }
    else
    {
        cout << "Not Harshad Number" << endl;
    }

    return 0;
}