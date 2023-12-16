#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void insertionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 1; i < n; i++) // Since sorted array is starting from 0th index thus 0th index will be sorted array's part and rest would be unsorted and hence ith loop starts from 1st index
    {
        // Keeping the index of comparision element to be "i";
        int current = v[i];
        // And for the sorted array loop taking the jth index to be "i-1";
        int j = i - 1;
        // We switch the elements untill j is in bound and value of jth index is greater than that of current.
        while (j >= 0 && v[j] > current)
        {
            v[j + 1] = v[j]; // If found true pushing the element towards right
            j--;             // And also moving the jth pointer to the left in the sorted array
        }
        // Followed by this changing the current element to be the one at with the element at "j+1"th Index.
        v[j + 1] = current;
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

    insertionSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

// Time Complexity : Best Case: O(n)   Worst Case: O(n^2)

// Example : 11 8 15 9 4
// Output  : 4 8 9 11 15
