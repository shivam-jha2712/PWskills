#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// The function f represents whether x is present in the range [i, n-1] or not? 
bool f(int n, int x, int i, int *arr)
{
    // Base Case: Array is exhausted then return false
    if(i == n)
    {
        return 0;
    }
    // Self work: if a number x is present at arr[i] then return true else
// (Assume: the function checks for i+1 to n ) and then check for this
    return ((arr[i] == x) || f(n, x, i+1, arr));
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n = 8;
    int arr[] = {4, 12, 54, 14, 3, 8, 6, 1};
    int x = 14;

    if (f(n, x, 0,arr) == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}