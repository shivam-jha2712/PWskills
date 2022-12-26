#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int num;
    cin >> num;
    num % 3 == 0 || num % 5 == 0 ? cout << num << endl : cout << "No such number" << endl;
    return 0;
}