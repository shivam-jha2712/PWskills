#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit < smallest)
        {
            smallest = digit;
        }
        if (digit > largest)
        {
            largest = digit;
        }
        n /= 10;
    }

    cout << smallest << " " << largest << endl;

    return 0;
}
