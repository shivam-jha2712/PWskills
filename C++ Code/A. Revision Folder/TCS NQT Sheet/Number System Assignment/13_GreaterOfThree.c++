#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    if(a>b && a>c)
    {
        cout << a << endl;
    }
    else if(b>a && b>c)
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }


    return 0;
}