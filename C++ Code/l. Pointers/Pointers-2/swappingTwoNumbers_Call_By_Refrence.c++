#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    int *ptr1 = &a, *ptr2 = &b;

    swap(ptr1, ptr2);

    cout << a << " " << b << endl;
    return 0;
}
// Since over here chnages are done by the help of pointers.

// Thus both the techniques of Call by Refrence and Derefrencing takes place 
// And hence since manipulation is done by the help of pointers. Even though all changes are done in a seperate function then they can be shown easily.