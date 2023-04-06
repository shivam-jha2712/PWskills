#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int powerValue(int p , int q){
    // base case - for q = 0 it will be 1 
    if(q == 0)
    {
        return 1;
    }

    // Assumption -  that it will always be correct for p^q-1;
    else{
        return p * powerValue(p,q-1);
        // Self Work - that we will multiply the number p with the assumption.
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    
    // int p,q;
    // cin >>  p >> q;

    // cout << powerValue(p,q);
    cout << powerValue(2 , 4);

    return 0;
}