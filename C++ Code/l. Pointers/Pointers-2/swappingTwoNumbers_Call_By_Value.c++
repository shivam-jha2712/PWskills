#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}


int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    swap(a,b);

    cout << a << " " << b << endl;
    return 0;
}
// Remember since here changes are done by the help of call by value thus the changes will not be seen. As all the changes are done on the copy variable and thereby the copy variable will be updated but the original data remains the same.