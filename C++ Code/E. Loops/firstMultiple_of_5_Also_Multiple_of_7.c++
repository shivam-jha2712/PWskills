#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int i = 5;
    while (true)
    {
        // int Num;
        // cin >> Num;
        if (i % 7 == 0)
        {
            cout << i << endl;
            break;
        }
        i += 5;
    }
    return 0;
}