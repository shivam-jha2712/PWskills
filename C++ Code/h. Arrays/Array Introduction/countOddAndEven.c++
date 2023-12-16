#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n, countOdd = 0, countEven = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            countEven++;
        }
        else if (arr[i] % 2 != 0)
        {
            countOdd++;
        }
    }
    cout << "Odd Numbers: " << countOdd << endl;
    cout << "Even Numbers: " << countEven << endl;
    return 0;
}