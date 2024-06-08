#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    int sum = v[0] + v[n-1];
    cout << sum << endl;

    return 0;
}