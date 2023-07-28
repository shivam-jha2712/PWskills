#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void findRoots(int a, int b, int c)
{
    // If a is 0, then equation is not quadratic, but
    // linear
    if (a == 0)
    {
        cout << "Invalid";
        return;
    }

    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));

    if (d > 0)
    {
        cout << "Roots are real and different : \n";
        cout << (double)(-b + sqrt_val) / (2 * a) << "\n"
             << (double)(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0)
    {
        cout << "Roots are real and same : \n";
        cout << -(double)b / (2 * a);
    }
    else // d < 0
    {
        cout << "Roots are complex : \n";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt_val / (2 * a) << "\n"
             << -(double)b / (2 * a) << " - i"
             << sqrt_val / (2 * a);
    }
}

int main() // MAIN DEFINATION
{
    int a, b, c;
    cout << "Enter a, b, c in ax^2 + bx + cx: " << endl;
    cin >> a >> b >> c;

    findRoots(a, b, c);

    // int d = sqrt(b * b - 4 * a * c);

    // int root1 = (d - b) / 2 * a;
    // int root2 = (-1 * d - b) / 2 * a;

    // cout << "root1: " << root1 << endl;
    // cout << "root2: " << root2 << endl;
    return 0;
}