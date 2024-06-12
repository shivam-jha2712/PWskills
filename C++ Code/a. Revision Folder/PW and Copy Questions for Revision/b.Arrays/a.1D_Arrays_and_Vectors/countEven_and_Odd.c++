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
    int count_Odd = 0;
    int count_Even = 0;

    for(int i = 0; i<n; i++){
        if(v[i] %2 != 0){
            count_Odd++;
        }
        else if(v[i] %2 == 0){
            count_Even++;
        }
    }

    cout << "Odd Numbers = " << count_Odd << endl;
    cout << "Even Numbers = " << count_Even << endl;

    return 0;
}