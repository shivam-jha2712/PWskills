#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    int *ptr = NULL; // This is how we declare a Null Pointer.
    int *p1 = NULL; // This is how we declare a Null Pointer.
    int *p2 = 0;    // This is also we can declare a Null Pointer.

    // -- This is happening because the null pointer has the ascii value as 0 thus both Null pointer and 0 bring there output from the same place itself
     
    int *p3 = '\0'; // This is also we can declare a Null Pointer.

    // The output that comes out would be the same in both the case as because NULL pointer is not just any random value but instead it is some declared at certain memory location thus whenever some one declares the null pointer it is going to pint to the same location.
    cout << ptr << " " << p1  << " " << p2 << " " << p3 << " " <<endl;

    // BUT!! null pointer can't be derefrenced i.e;
    // cout << *ptr << endl; --  Will give Segmentaion fault.
    return 0;
}