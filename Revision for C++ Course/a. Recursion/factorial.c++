#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
long long fact(int n){
    if(n < 2)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cout << "Enter number to calculate factorial: " << endl;
    cin >> n;

    cout << "The Factorial value of " << n << "is " << fact(n) << endl;

    return 0;
}