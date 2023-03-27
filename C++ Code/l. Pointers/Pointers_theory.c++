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

    // 2 - Create a pointer that can store address of a; And as x is an integer variable, so we need a pointer that can store address of integer data type.   
    int *ptr = &a;
    cout << ptr;

    // 3 - Now since pointer to "a" can give the address stored at "ptr"  
    return 0;
}