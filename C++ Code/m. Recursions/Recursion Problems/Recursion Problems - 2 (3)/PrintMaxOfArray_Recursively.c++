#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int maximumElement(int *arr, int idx, int n)
{
    // Base Case: If arr is empty or has only one element then it return itself as max element
    if(idx == n-1)
    {
        return arr[idx];
    }
    else
    {
        // Assumption: That it can find maximum out of all the elements coming after the index idx.

        return max(arr[idx], maximumElement(arr, idx + 1, n));
        
        // Self work : It is compare maximum of the remaining element with the current element.
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n = 5;
    int arr[] = {3, 10, 2, 5, 7};

   cout <<  maximumElement(arr, 0, n);

    return 0;
}