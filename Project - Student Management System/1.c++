#include <bits/stdc++.h>
using namespace std;

// void solve()
// {
//     int N, K;
//     string ans;
//     cin >> N >> K ;
//     cin >> ans;

    // if (ans[0] == '0')
    // {
    //     K--;
    //     ans[0] == '1';
    // }
    // while (K--)
    // {
    //     ans += '0';
    // }
    // cout << ans << endl;
// }

string f(string &ans, int K)
{
    if (ans[0] == '0')
    {
        K--;
        ans[0] == '1';
    }
    while (K--)
    {
        ans += '0';
    }
    return ans;
}

int main()
{
    // your code goes here
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    int K =3;
    string ans = "001110";
  
    cout << f(ans, K) << endl;
    return 0;
}
