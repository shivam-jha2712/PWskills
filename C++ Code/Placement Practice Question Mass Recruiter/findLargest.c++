#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int sortArr(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};

    cout << "The largest element in the array is: " << sortArr(arr1) << endl;
    cout << "The largest element in the array is: " << sortArr(arr2);
    return 0;
}