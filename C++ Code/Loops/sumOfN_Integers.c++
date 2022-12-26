#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int sum = 0;
    do
    {
        int Num;
        cin >> Num;
        sum += Num;
        n--;
    } while (n > 0);
    cout << sum << endl;
    return 0;
}