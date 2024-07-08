#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
void solve(int lo, int hi){
    for(int i = lo; i<=hi; i++){
        if(lo%2 != 0){
            cout << lo << " ";
        }
        lo++;
    }
}

int main() // MAIN DEFINATION
{
    int lo, hi;
    cin >> lo >> hi;
    solve(lo, hi);
    return 0;
}