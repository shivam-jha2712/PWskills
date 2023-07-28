#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int ans = n * (n + 1) / 2;
    cout << "Sum of the numbers: ";
    cout << ans << endl;
    return 0;
}