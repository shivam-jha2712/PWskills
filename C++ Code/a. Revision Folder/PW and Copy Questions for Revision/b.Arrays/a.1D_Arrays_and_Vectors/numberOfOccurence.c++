#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    int n;
    cin >> n;
    vector<int>v(n);

    for(int i =0; i<n; i++){
        cin >> v[i];
    }

    int target;
    cin >> target;

    int countOfTarget = 0;
    for(int i = 0; i<n; i++){
        if(v[i] == target){
            countOfTarget++;
        }
    }
   

    cout << "The number occurence of target  is: " << countOfTarget << endl;
    return 0;
}