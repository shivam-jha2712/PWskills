#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    int *ptr1 = &a, *ptr2 = &b;

    swap(*ptr1, *ptr2);

    cout << *ptr1 << " " << *ptr2 << endl;
    return 0;
}