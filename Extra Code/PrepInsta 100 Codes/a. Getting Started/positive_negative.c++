#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{

    int n;
    cin  >> n;

    if(n < 0)
    {
        cout << "Negative";
    }
    else if(n > 0)
    {
        cout << "Postive";
    }
    else if(n == 0)
    {
        cout << "Number is Zero";
    }
    else
    {
        cout << "Number is Invalid";
    }

    return 0;
}