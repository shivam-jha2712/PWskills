#include<bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;
    vector<int>arr1(n);
    vector<int>arr2(n);

    for(int i = 0; i<n; i++){
        cin >> arr1[i];
    }

    for(int i = 0; i<n; i++){
        cin >> arr2[i];
    }

    int min1 = arr1[0];
    int min2 = arr2[0];
    int min_indx1 = 0;
    int min_indx2 = 0;

    for(int i = 0; i<n; i++){
        if(arr1[i] < min1){
            min1 = arr1[i];
            min_indx1 = i;
        }
    }

    for(int i = 0; i<n; i++){
        if(arr2[i] < min2){
            min1 = arr2[i];
            min_indx2 = i;
        }
    }

    if(min_indx1 != min_indx2){
        cout << min1 + min2 << endl;
    }
    else{
        cout << "Not possible" << endl;
    }

    return 0;
}
