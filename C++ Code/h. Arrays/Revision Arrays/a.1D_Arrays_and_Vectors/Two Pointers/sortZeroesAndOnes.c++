#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i< n; i++){
        cin >> v[i];
    }

    int lo = 0;
    int hi = n - 1;

    while(lo< hi){
        if(v[lo] == 1 && v[hi]== 0){
            swap(v[lo], v[hi]);
            lo++;
            hi--;
        }
        if(v[lo] == 0){
            lo++;
        }
        if(v[hi] == 1){
            hi--;
        }
    }

    for(int i =0; i<n; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}