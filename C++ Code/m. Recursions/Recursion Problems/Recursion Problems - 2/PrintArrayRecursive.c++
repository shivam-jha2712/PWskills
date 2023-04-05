#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;

//----- IMPORTANT POINT -----
// Tum shayad jldi jldi mei yeh point bhool sakta hai ki yaha pe (*arr) kyun use kiye hai toh uska answer yeh hai ki - Call by refrence se changes occur krenge agar pointer use kar ke banaye toh thus you can do it with that. Nahi toh agar sidha array dete toh call by value hota aur function me hue changes reflect nahi ho paate.

void recursiveArrays(int *arr, int i, int n){
// base case
    if(i == n){
        return;
    }
// Self work
cout << arr[i] << endl;

// Assumption that it will print the remaining array for us.
recursiveArrays(arr, i+1, n);
}

int main() // MAIN DEFINATION 
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n = 10;
    int arr[] = {0,1,2,3,4,5,6,7,8,9};

    recursiveArrays(arr, 0, n);
    
    return 0;
}