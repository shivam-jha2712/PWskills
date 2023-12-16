#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;

int factorial(int n){
// Base Case
    if(n == 1)
        return 1;
    else{
        return n * factorial(n - 1);
    }

}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;

    cout << factorial(5) << endl;
    return 0;
}