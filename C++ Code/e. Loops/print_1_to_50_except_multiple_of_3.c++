#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int i = 0;
    while (i <= 50)
    {
        i++;
        if (i % 3 == 0)
            continue;
        cout << i << endl;
    }
    return 0;
}