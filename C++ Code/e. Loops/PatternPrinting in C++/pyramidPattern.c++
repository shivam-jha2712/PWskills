#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= (num - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * (i)-1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}