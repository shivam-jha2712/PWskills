#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime for : " << i << endl;
        }
        else
        {
            cout << "Prime for : " << i << endl;
        }
        i++;
    }

    // if (flag = 0)
    // {
    // }
    // else
    // {
    //     cout << "Prime" << endl;
    // }

    return 0;
}