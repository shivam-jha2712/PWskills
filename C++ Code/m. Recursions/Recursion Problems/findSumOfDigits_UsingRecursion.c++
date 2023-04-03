#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    // RECURSIVE APPROACH
int sumOfDigits(int x) {
    // Base case - For single digit it will return itself
    if(x >= 0 && x <= 9)
    {
        return x;
    }
    // Assumption - that it would work for x/10 always
    else
    {
    // Self work  - (remainder = x%10) + f(x/10) 
        int remainder = x % 10;
        return remainder + sumOfDigits(x/10);
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n ;
    cin >> n;
// f(n) = sumOfDigits(n) is the function that works on it.
    cout << sumOfDigits(n) << endl;
    return 0;
}