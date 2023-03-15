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
        for (int j = i; j <= num; j++)
        {
            cout << j;
        }
        for (int j = 1; j < i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}