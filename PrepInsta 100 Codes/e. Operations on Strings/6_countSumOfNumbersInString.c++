#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int sum = 0;

    for (auto it : s)
    {
        if (it >= '0' && it <= '9')
        {
            sum += int(it - '0'); // We need to remove the ascii value form it and typecast it in order to get the correct value
        }
    }

    cout << sum << endl;

    return 0;
}