#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int Num;
    cin >> Num;
    Num % 2 == 0 && Num % 3 == 0 ? cout << Num << endl : cout << " " << endl;
    return 0;
}