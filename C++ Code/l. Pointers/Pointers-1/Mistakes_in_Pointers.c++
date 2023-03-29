#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    int x = 9;
    int y =2;
    int *ptr = &x;

    // ptr = 5; we can't do this as "ptr" only store address nothing else

    // *ptr = &y; we can't do this as we cannot store address in an int bucket.

    cout <<"Address of x: " << &x<< "\n";
    cout <<"Address stored inside ptr: " << ptr << "\n";
    cout <<"Address of ptr itself: " << &ptr<< "\n";  // This prints the address of the ptr bucket and not the address stored in the ptr bucket.
    return 0;
}