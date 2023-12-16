#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int frogJump(int *v, int n, int i)
{

    // Base Case : if there is no stone to move to then return 0 and this will happen at the last stone(n-1)
    // Base Case : if there is omnly one stone to move to then return for index  i = i+1 and this will happen at second last stone (n-2)
    if (i == n - 1){
        return 0;
    }
    if (i == n - 2)
    {
        return frogJump(v, n, i + 1) + abs(v[i] - v[i + 1]);
    }

    // For Assumption: It to take care that either the frog will jum from i to i+1 or from i to i+2 then we shal assume that a function frogJump will give us correct answer for both i+1 to n and from i+2 to n. And then we would be adding the distance from i to any of the approaches that we took
    else
    {
        return min(frogJump(v, n, i + 1) + abs(v[i] - v[i + 1]), frogJump(v, n, i + 2) + abs(v[i] - v[i + 2]));
    }

    // As self work we need to return the minmum of the to appraoches it will follow up
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int v[] = {10,30,40,20};
    int n = 4;

    cout << frogJump(v, n, 0);

    return 0;
}