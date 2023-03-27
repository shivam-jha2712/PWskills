#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n, first, second, third, fourth, fifth, sum;
    n = 12345;
    first = n / 10000;
    n = n % 10000; // first digit
    second = n / 1000;
    n = n % 1000; // second digit
    third = n / 100;
    n = n % 100;     // third digit
    fourth = n / 10; // fourth digit
    fifth = n % 10;  // fifth digit

    sum = first + fourth;
    cout << "sum of the first and the fourth digit: " << sum << endl;

    return 0;
}