#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the Number: ";
    cin  >> n;

    int flag  = 0;
    for(int i = 2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        cout << "Number is Non Prime";
    }
    else
    {
        cout << "Number is prime";
    }

    return 0;
}