#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int a, b;
    cin >> a >> b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << a + b << endl;

    int c;
    c = b;
    b = a;
    a = c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}