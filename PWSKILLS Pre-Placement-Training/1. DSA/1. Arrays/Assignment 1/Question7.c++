/*
💡 **Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

Note that you must do this in-place without making a copy of the array.

**Example 1:**
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void relativeOrder(vector<int> &v)
{
    int n = v.size();
    int insertAtIndex = 0; // Pointer for inserting non-zero elements

    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            v[insertAtIndex] = v[i]; // Move non-zero element to the current insert index
            insertAtIndex++;
        }
    }
    // For loop ends and non zero insertion is complete
    // While loop begins and zero insertion is started
    while (insertAtIndex < n)
    {
        v[insertAtIndex] = 0; // Fill the remaining elements with zero
        insertAtIndex++;
    }
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

    relativeOrder(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}