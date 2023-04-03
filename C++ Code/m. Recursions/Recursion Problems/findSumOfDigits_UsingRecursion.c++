#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int sumOfDigits(int x) {
    int result = 0; 
    while(x!= 0)
    {
    int remainder = x % 10;
    result = result + remainder;

    x = x / 10;
    }
return result;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    
    // int n;
    // cin >> n;
    // cout << sumOfDigits(n) << endl;
    cout << sumOfDigits(2712) << endl;
    return 0;
}