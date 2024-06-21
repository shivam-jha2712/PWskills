#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        string str;
        cin >> str;
        if (str == "++X" || str == "X++")
        {
            count++;
        }
        if (str == "--X" || str == "X--")
        {
            count--;
        }
    }
    cout << count << endl;
    return 0;
}