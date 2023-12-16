#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Using Pointer in an array for Post and Prefix Arithmetic Operators
    int arr[2] = {1, 19};
    int *ptr = &arr[0];

    cout << ptr << " " << *ptr << endl; // address of arr[0] and its value
   
// Working with post increment in case of pointers (*ptr++).
    cout << *ptr++ << endl; // Output here will be 1.

    // 1 -  In this what happens is that operation takes place as first it prints the value of *ptr(derefrenced pointer).

    // 2 -  But then (++) which follows (*ptr) is responsible for shifting the memory address of ptr from intially (arr[0]) to (arr[1])

    cout << "Using *ptr++ pointer is incremented: " << endl;
    cout << arr[0] << " " << arr[1] << endl;
    cout << ptr << " " << *ptr << endl;

    return 0;
}