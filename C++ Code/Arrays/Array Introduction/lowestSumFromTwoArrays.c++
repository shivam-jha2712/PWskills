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
        sort(arr1, arr1 + n); // Using Sort function of STL
    }
    for (int j = 0; j < n; j++)
    {
        cin >> arr2[j];
        sort(arr2, arr2 + n); // Using Sort function of STL
    }
    cout << arr1[0] + arr2[0] << endl;
    return 0;
}