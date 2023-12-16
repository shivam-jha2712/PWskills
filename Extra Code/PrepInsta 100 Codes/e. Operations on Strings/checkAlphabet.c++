#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    char c;
    cout << "Enter the Character: ";
    cin >> c;

    // char a = toupper(c);

    if(c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c<='9')
    {
        cout << "Character is Alphabet" << endl;
    }
    else
    {
        cout << "Character is not Alphabet" << endl;
    }
    return 0;
}