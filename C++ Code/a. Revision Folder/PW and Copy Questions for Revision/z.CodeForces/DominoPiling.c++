#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;
    int area = m*n;

    int ans = ceil(area/2);
    cout << ans << endl;
    return 0;
}