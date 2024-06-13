#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int target;
    cin >> target;

    bool found = false;

    for(int i = 0;i <n; i++){
        if(v[i] == target){
            found = true;
        }
    }

    if(found){
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
    return 0;
}