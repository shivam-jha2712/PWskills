#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void selectionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++) // No of passes again would be n-1
    {
        // Taking the ith element for every iteration to be the minimum element
        int min_Idx = i;
        // Finding minmum in unsorted array
        for (int j = i + 1; j < n; j++)
        {
            // Comparing the ith element in every iteration to its immediate next element, and keep on doing it till the nth element and if found that it is minimum updating the index of minimum element
            if (v[j] < v[min_Idx])
            {
                min_Idx = j;
            }
        }
        // Followed by there might be the case that that the minmum idx already has the same value then no swap will occur thus to avoid it we pass a check that if the minmum idx is not the same as the idx assigned to minmum idx previously then swap them.
        if (min_Idx != i)
        {
            swap(v[i], v[min_Idx]); // Placing minimum at beginning
        }
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

    selectionSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

// Example : 5 8 4 9 2
// Answer :  2 4 5 8 9

// Time Complexity: O(n^2) - Best Case, O(n^2) - Worst Case