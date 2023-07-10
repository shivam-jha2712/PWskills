#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int fibbo(int n)
{
    if(n <2)
    {
        return n;
    }
    return fibbo(n-1) + fibbo(n-2);
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i <= n; i++)
    {
        cout << fibbo(i) << " " ;
    }

    return 0;
}