#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;

    int *ptra = &a, *ptrb = &b;

    int result = *ptra * *ptrb;

    cout << result << endl;

    return 0;
}