#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    int x = 1; // Size of int = 4
    double y = 9.8; // Size of double = 8

    int *ptr = &x;
    double *ptrd = &y; // Since datatype of y is double thus that of its pointer variable is also double

    cout << "Size of x: " << sizeof(x) << endl;
    cout << "Size of y: " << sizeof(y) << endl;

// POINTER ARIRTHMETIC -- 1.) Increment  2.) Decrement 

//  Increment/ Decrement: 
    // a). It is different to that of integer arithmetic
    // b). Increment/Decrement of the pointer value refers to shift in memory location that pointer is pointing to.
    // c). Also the shift is dependent on the size of type of variable.
    // d). (ptr + i) = ptr address + i * sizeof(datatype_of_pointer)

// Always remember that Pointer address deals in hexadecimal value and thus any increment or decrement will follow the same rule.

    cout << ptr << " " << (ptr + 1) << " " << (ptr - 1) << endl;
    // (ptr + 1) = ptr address + 1 * sizeof(datatype_of_pointer)
    cout << ptrd << " " << (ptrd + 1) << " " << (ptrd + 2) << " " << (ptrd - 3) << endl;
    // (ptrd + 1) = ptrd address + 1 * sizeof(datatype_of_pointer)
    // (ptrd - 1) = ptrd address - 1 * sizeof(datatype_of_pointer)
    return 0;
}