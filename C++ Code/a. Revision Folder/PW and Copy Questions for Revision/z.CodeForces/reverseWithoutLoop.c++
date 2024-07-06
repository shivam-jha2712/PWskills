#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string str;
    getline(cin, str); // Use getline to read the entire line including spaces

    reverse(str.begin(), str.end()); // Reverse the entire string

    cout << str << endl; // Output the reversed string

    return 0;
}
