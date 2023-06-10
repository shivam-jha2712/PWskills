#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    // While Loop :
    int i = 0;
    while (n--)
    {
        cout << " " << i + 1 << " " << endl;
        i++;
    }

    // Do-While Loop :
    int i = 0;
    do
    {
        cout << " " << i << " " << endl;
        i++;
    } while (n--);

    // For loop :
    for (int i = 0; i < n; i++)
    {
        cout << " " << i + 1 << " " << endl;
    }

    return 0;
}