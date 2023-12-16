#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    
    int x = 10;
    int *ptr = &x;

    cout << ptr << endl;

    // ptr = ptr + 1;
    ptr += 1;
    cout << ptr << endl;

    // Using Pointer in an array for Post and Prefix Arithmetic Operators
    int arr[2] = {1,19};
    int *ptra = &arr[0];

    cout << ptra << " " << *ptra << endl; // address of arr[0] and its value
    cout << (ptra + 1) << " " << *(ptra + 1) << endl; // address of arr[1] and its value

    return 0;
}