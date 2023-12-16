#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }
    int min1 = arr1[0];
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] < min1)
        {
            min1 = arr1[i];
        }
    }
    int min2 = arr2[0];
    for (int j = 0; j < n; j++)
    {
        if (arr2[j] < min2)
        {
            min2 = arr2[j];
        }
    }
    cout << min1 + min2 << endl;
    return 0;
}