#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int count = 0;
    // Doing it using a for each loop makes it easier
    for (auto it : s)
    {
        if (it != ' ')
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}