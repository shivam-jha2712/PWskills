#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a = 1;
    int b = 0;

    int c = a && b;
    int d = a || b;
    int e = !a;

    cout << "logical and(&&) : " << c << " "
         << "logical OR(||) : " << d << " "
         << "logical Not (!) : " << e << " " << endl;
    return 0;
}