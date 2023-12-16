#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int Num;
    cout << "Enter a Number : " << endl;
    cin >> Num;
    if (Num < 0)
        cout << "The Number is Skipped since negative " << endl;
    else
        cout << Num;
    return 0;
}