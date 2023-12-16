#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    float f = 10.2;
    int x = 10;
    void *ptr = &f;
    ptr = &x;

    // Due to void pointer same pointer can store different type of addresses
    // Also the void pointer cannot be derefrenced

    // Thus in order to derefrence it we need to do it using typecasting.
    int *integerPointer = (int *)ptr;

    cout << *integerPointer << endl;
    return 0;
}