#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int mazePath(int i, int j, int m, int n)
{

    // Base Case: if the iterartor reaches to the last element then you will get 1 as the return value OR else if the iterator moves to the right extreme and supassess it and same goes to the bottom extreme and surpasses it. We will get "0" as the return value.
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= m || j >= n)
    {
        return 0;
    }

// Assume that the function mazePath can give you all the ways to move the bottom right from the current cell (i,j) --{Only able to move to right and down}-- using the function mazePath(i,j, m, n) thus the fuction to do the same from the immediate right cell to the bottom right would be mazePath(i, j+1, m, n) and that from the immediate bottom cell would be mazePath(i+1, j, m, n). 

// Self Work: So the total ways would just be the sum of both the ways to reach bottom right from the immediate right and immediate bottom.
    return (mazePath(i, j + 1, m, n) + mazePath(i + 1, j, m, n));
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int m = 2, n = 3;
    // int i ,  j; These would be point from where you need to iterarte in the grid. Here since the search is to be done from the very first box of the grid thus the values would be 0 , 0

    cout << mazePath(0, 0, m, n) << endl;

    return 0;
}