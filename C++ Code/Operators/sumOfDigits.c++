#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n, first, second, third, sum;
    n = 123;
    first = n / 100;
    n = n % 100; // first digit
    second = n / 10;
    // second digit
    third = n % 10;
    // third digit

    sum = first + second + third;
    cout << "sum of the digits of the number: " << sum << endl;

    return 0;
}