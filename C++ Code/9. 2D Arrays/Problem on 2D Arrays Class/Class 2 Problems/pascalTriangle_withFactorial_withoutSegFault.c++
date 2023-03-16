#include <bits/stdc++.h>
using namespace std;

long long int fact(long long int m)
{
    if(m==0)
        return 1;
    long long int res = 1;
    for (long long int i = 2; i <= m; i++)
        res = res * i;
    return res;
}

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> pascal (n);

    for(int i =0; i<n; i++)
    {
        pascal[i].resize(i+1);
        for(int j =0; j< i+1; j++)
        {
            pascal[i][j] = fact(i) / (fact(j) * fact(i - j));
        }
    }
    return pascal;
}

int main() {

    int n;
    cin >> n;

    vector<vector<int>> ans;
    ans  = pascalTriangle(n);

    for(int i =0; i<ans.size(); i++ )
    {
        for(int j =0; j<ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


/*The code appears to have a logical error that causes a segmentation fault when n > 13.
This is because the fact() function computes factorials of numbers, and factorials of larger numbers lead to overflow of integer data type in C++.
The result of fact() function becomes larger than the maximum value that can be stored in an integer,
 leading to undefined behavior, which manifests itself as a segmentation fault.

To fix this issue, you can use long long int data type to store the result of fact() function.
You can replace the line int res = 1; with long long int res = 1;, 
and update the loop counter i and variable m to long long int data type as well.*/