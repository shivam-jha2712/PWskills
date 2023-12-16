#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    int arr[3] = {15,12,6};
    int *ptr  = &arr[0];

// This proves that the name of the array serves as the pointer to the very first element in the array. And since it works as pointer thus it can be derefenced as an pointer as well.
    cout << ptr << " " << arr << " " << *ptr << " " << *arr <<endl;

    // And since name of array serves as a pointer thus we can even use properties related to "Pointer Arithmetic" in it in a similar fashion.

    cout << *(arr+0) << " " << *(arr+1) << endl;

    return 0;
}