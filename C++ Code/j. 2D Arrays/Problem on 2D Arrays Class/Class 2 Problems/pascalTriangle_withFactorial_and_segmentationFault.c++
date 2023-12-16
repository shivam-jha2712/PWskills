// Try it yourself and remeber it is just like pattern printing so revise it and then code warna moral aur confidence dono gir jayega 
#include <bits/stdc++.h>
using namespace std;

int fact(int m)
    {
        if(m==0)
            return 1;
    int res = 1;
        for (int i = 2; i <= m; i++)
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