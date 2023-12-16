/*
Question 5
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Example 1:
Input: nums = [1,2,3]
Output: 6
*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int maximumProduct(vector<int> &v)
{
    int n = v.size();

    sort(v.begin(), v.end());

    // the max three numbers could either be the last 3 numbers
    int option1 = v[n - 1] * v[n - 2] * v[n = 3];

    // Or the max could be the product of first 2(-ve number) and the last number
    int option2 = v[0] * v[1] * v[n - 1];

    // Give the maximum of these two
    int result = max(option2, option1);

    return result;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << maximumProduct(v) << endl;

    return 0;
}