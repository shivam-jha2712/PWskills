#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int partition(int arr[], int first, int last)
{
    int pivot = arr[last];
    int i = first - 1; // For inserting element < pivot (by doing swap with elements at j)
    int j = first;     // For finding elements < pivot

    for (; j < last; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // After this loop we have made all the elements less than pivot on left and elements greater than that of pivot on the right.

    // Thus now at the end of the loop we have out i pointing to the last element that is less than pivot.

    // Thus correct position of pivot will be now i+1 so we will swap it to do that
    swap(arr[i + 1], arr[last]);
    // Now we return the new position of pivot for the further recursive call to sort both the left and right elements of the pivot.
    return i + 1;
}



void quickSort(int arr[], int first, int last)
{
    // Base Case: Having both pointers on one place or having only one element
    if (first >= last)
    {
        return;
    }
    // Self Work: Finding the pivot element position
    int pi = partition(arr, first, last);
    // Assume: that it works for everything before and after pivot
    quickSort(arr, first, pi - 1);
    quickSort(arr, pi + 1, last);
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int arr[] = {20, 12, 35, 16, 18, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity : Best Case O(), Worst Case O()
// Space Complexity: O()


/*
POINT TO REMEMBER-
The problem with the code is that in the partition function, the pivot element is not being swapped with the correct element. Instead of swapping the pivot element with arr[i + 1], the code is swapping it with the value of pivot directly, which is incorrect. This is causing the duplicates in the sorted array.

To fix this, the line swap(arr[i + 1], pivot); should be changed to
swap(arr[i + 1], arr[last]); so that the pivot element is swapped with the correct element in the array.
*/