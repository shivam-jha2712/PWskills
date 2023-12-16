#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n, m, o;
    cout << "Enter the Numbers : ";
    cin >> n >> m >> o;

    cout << max(m, max(n, o));
    return 0;
}