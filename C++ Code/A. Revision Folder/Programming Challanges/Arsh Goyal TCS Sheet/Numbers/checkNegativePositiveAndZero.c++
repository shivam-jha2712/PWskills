#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (n < 0)
    {
        cout << "Negative Number" << endl;
    }
    else if (n > 0)
    {
        cout << "Positive number" << endl;
    }
    else
    {
        cout << "Zero Number" << endl;
    }
    return 0;
}