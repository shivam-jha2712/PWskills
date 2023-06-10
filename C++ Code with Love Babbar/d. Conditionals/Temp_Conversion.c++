#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int temp;
    cin >> temp;

    int temp2 = ((temp - 32) * 5 / 9);

    cout << temp2 << endl;

    return 0;
}