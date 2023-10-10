#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Following Eucleadian Algorithm

int gcd(int a, int b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    // Base Case
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

void reduced(int &num3, int &den3)
{
    int redGcd = gcd(num3, den3);
    num3 /= redGcd;
    den3 /= redGcd;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int num1, den1, num2, den2, num3, den3;
    cout << "Enter the 1st number as num and den followed by the second number in the same format : " << endl;
    cin >> num1 >> den1 >> num2 >> den2;

    int lcmOfDenom = (den1 * den2) / gcd(den1, den2);
    den3 = lcmOfDenom;

    num3 = num1 * (den3 / den1) + num2 * (den3 / den2);

    reduced(num3, den3);

    if (den3 != 1)
        cout << num3 << "/" << den3 << endl;
    else
        cout << num3 << endl;
    return 0;
}