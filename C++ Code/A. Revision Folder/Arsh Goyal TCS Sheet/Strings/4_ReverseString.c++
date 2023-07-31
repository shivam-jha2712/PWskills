#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    string str;
    cout << "Enter the String: ";
    getline(cin, str);

   reverse(str.begin(), str.end());

    cout << str << endl;
    return 0;
}