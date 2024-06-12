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

    int position;
    for(int i = 0; i<n; i++){
        if(v[i] == target){
            position = i;
        }
    }
    // Or you can traverse in opposite direction and find the first occurence as well
    // for(int i = n; i>0; i--){
    //     if(v[i] == target){
    //         position = i;
    //         break;
    //     }
    // }

    cout << "The last occurence is at: " << position << endl;
    return 0;
}