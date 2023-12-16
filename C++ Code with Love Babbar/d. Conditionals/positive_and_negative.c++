#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;

    // If-Else Statement
    if (a > 0)
    {
        cout << "Number is positive" << endl;
    }
    else if (a == 0)
        cout << "Number is Zero" << endl;
    else
    {
        cout << "Number is not positive" << endl;
    }

    return 0;
}