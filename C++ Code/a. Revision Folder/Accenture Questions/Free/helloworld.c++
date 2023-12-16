#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    if(n>18)
    {
        cout << "Can Drive" << endl;
    }
    else
    {
        cout << "Can't Drive" << endl;
    }
    return 0;
}