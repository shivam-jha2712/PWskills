#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void printSquare()
{
    int n;
    cin >> n;
    cout << pow(n, 2) << " ";
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        printSquare();
    }

    return 0;
}