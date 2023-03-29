#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    
    int a,b,c;
    cin >> a >> b >> c;

    int *ptr1 = &a, *ptr2 = &b , *ptr3 = &c;
    if(*ptr1 > *ptr2 && *ptr1 > *ptr3  )
    {
        cout << *ptr1 << " " << min(*ptr2 , *ptr3) << endl;
    }
    else if (*ptr2 > *ptr1 && *ptr2 > *ptr3)
    {
        cout << *ptr2 << " " << min(*ptr1, *ptr3) << endl;
    }
    else if (*ptr3 > *ptr2 && *ptr3 > *ptr1)
    {
        cout << *ptr3 << " " << min(*ptr2, *ptr1) << endl;
    }
    return 0;
}