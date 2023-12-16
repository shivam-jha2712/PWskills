#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int gcd(int a, int b){
    // Also if in case in input b is given to be greater than a then call the gcd function but before that swap the position of b and a.
    if(b>a) {
        return gcd(b,a);
    }
// Base Case: if b == 0 return a ;
    if(b == 0)
    {
        return a;
    }
    // Assume: That this works fine for the caseof gcd(b, a%b) and it is importantnt to remember that a%b is going to continously reduce the value of second element called in the function thus this should trigger the corect approach in your mind.
    else{
        return gcd(b, a%b);
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    
    int x = gcd(40, 48);

    cout << x << endl;


    return 0;
}