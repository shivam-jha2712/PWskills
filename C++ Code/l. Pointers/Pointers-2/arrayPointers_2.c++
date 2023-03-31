#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    int a[3] = {1,2,3}; 
    int (*p)[3] = &a;

    cout << p << " " << a << " " << *p << " " << *a << endl;
    return 0;
}