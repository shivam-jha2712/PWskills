#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == ((n - 1) / 2)) || ((n - 1) / 2 == j))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}