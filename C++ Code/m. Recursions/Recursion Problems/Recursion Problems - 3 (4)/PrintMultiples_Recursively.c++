#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
void printMultiple(int n, int  k)
{
    if(k < 1)
    {
        return;
    }
    printMultiple(n , k-1);
    cout << n*k << " ";
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    
    int num = 12;
    int k = 5;

    printMultiple(num, k);

    return 0;
}