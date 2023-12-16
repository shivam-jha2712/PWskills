#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string s;
    cout << "Enter The String : ";
    getline(cin, s);

    string original = s;

    reverse(s.begin(), s.end());

    cout << "Reverse String : " << s << endl;

    return 0;
}