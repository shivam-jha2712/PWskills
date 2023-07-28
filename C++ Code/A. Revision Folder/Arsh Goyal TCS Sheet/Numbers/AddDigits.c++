#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int addDigits(int num)
{
    int sum = 0;
    while (num)
    {
        sum += (num % 10);
        num /= 10;
    }
    if (sum < 10)
        return sum;
    else
        return addDigits(sum);
}

int main() // MAIN DEFINATION
{

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    cout << addDigits(n) << endl;

    return 0;
}