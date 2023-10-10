#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    
    if(n%400 == 0)
    {
        cout << "Leap Year" << endl;
    }
    else if (n % 4 == 0)
    {
        cout << "Leap Year" << endl;
    }
    else if (n % 100 == 0)
    {
        cout << "Not Leap Year" << endl;
    }
    else
    {
        cout << "Not a Leap Year" << endl;
    }

    return 0;
}