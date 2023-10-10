#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    sort(input.begin(), input.end());

    cout << "Sorted String : "<< input;
    return 0;
}