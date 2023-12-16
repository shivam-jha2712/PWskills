#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    int v, w;
    cin >> v >> w;

    int FW = (w - 2*(v))/2;
    int TW = v - FW;

    cout << "FW = " << FW << endl;
    cout << "TW = " << TW << endl;

    return 0;
}