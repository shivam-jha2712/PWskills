#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    char ch;
    cin >> ch;

    if ((int)ch <= 122 && (int)ch >= 97)
    {
        cout << "LowerCase Letter" << endl;
    }
    else if ((int)ch <= 90 && (int)ch >= 65)
    {
        cout << "UpperCase Letter" << endl;
    }
    if ((int)ch <= 57 && (int)ch >= 48)
    {
        cout << "Number" << endl;
    }

    return 0;
}