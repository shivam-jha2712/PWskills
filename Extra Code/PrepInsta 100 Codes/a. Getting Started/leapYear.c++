#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the Year :";
    cin >> n;

    if(n%400 == 0)
    {
        cout << "Leap Year";
    }
    else if(n%4 == 0 && n%100 != 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not Leap Year";
    }
    return 0;
}