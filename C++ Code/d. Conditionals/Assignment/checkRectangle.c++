#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int length, breadth;
    cout << "Enter Length: " << endl;
    cin >> length;
    cout << "Enter Breadth: " << endl;
    cin >> breadth;
    if (length == breadth)
        cout << "It is a Square" << endl;
    else
    {
        cout << "It is a Rectangle" << endl;
    }

    return 0;
}