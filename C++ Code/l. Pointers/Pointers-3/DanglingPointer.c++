#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    int *ptr = NULL;
    {
        int x = 0;
        ptr = &x;
    }
    cout << ptr;
    // Since outside the scope the value of x is invalid but the pointer was assigned to point on the memory block which stored x thus it will continue to do and because of this chaos might be occured and in order to avoid that we use dangling pointer using Dynamic memory allocation joki aage padhenge.
    return 0;
}