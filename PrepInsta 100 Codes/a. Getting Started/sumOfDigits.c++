#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;

    while(n!=0)
    {
        sum+= n%10;
        n = n/10;
    }

    cout << sum << endl;
    return 0;
}