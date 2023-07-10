#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);


    int n, a , d;
    cin >> n >> a >> d;

    int l = a + (n-1)*d;

    int sum = (n*(a+l))/2;

    cout << sum << endl;

    return 0;
}