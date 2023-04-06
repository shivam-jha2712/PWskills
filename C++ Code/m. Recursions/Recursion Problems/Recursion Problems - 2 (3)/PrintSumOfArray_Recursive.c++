#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int sumOfArray(int *arr, int idx, int n)
{
    // Base Case: if arr has only one element than that is the sum
    if(idx == n-1)
    {
        return arr[idx];
    }
    else
    {
        // Assumption: That it can find sum of all the elements coming after the index idx.
        return (arr[idx] + sumOfArray(arr, idx+1, n));
        // Self Work: Add the element at idx to be added with the sum of all the other elements that follow.
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    
    int n = 5;
    int arr[] = {2,3,5,20,1};

    cout << sumOfArray(arr, 0,n);

    return 0;
}