#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    string s = to_string(n);

    reverse(s.begin(), s.end());

    int ans = stoi(s);
    cout << ans << endl;
    // cout << typeid(ans).name();
    return 0;
}