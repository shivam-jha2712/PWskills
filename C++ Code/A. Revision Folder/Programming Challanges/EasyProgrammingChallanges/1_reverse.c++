#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;
    reverse(str.begin(), str.end());

    cout << str << endl;

    return 0;
}