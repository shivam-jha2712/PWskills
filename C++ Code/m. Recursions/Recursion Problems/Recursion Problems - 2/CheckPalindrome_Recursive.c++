#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
bool checkPalindrome(string s, int idx, int n)
{
    if (idx == n)
    {
        return "";
    }
    else{
        
    }
}


int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
   
    string s;
    cin >> s;

    int n = s.size();

    cout << checkPalindrome(s, 0, n);

    return 0;
}