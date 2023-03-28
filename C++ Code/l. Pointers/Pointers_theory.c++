#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a = 10;
    float b = 10.973;

    // 1 - Here & is the address of operator that is used to determine the
    cout << &a << endl;
    cout << &b << endl;

    // 2 - Create a pointer that can store address of a; And as x is an integer variable, so we need a pointer that can store address of integer data type.
    int *ptr = &a;
    float *ptr_2 = &b;
    // pointer needs same data type as that of variable whose address it will be storing. Since "b" is float data type thus pointer for "b" will also be of float data type.
    cout << ptr << endl;
    cout << ptr_2 << endl;

    // 3 - Now since pointer to "a" can give the address stored at "ptr" . To identify the value stored at pointer "ptr" we need to use "*" in front of the pointer variable name to access the value at pointer "ptr".
    cout << *ptr << endl;   // This will give 10
    cout << *ptr_2 << endl; // This will give 10.973
    return 0;
}
