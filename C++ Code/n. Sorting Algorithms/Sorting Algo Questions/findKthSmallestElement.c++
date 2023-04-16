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

int kth_smallest(int arr[], int l, int r, int k)
{
    if (k > 0 && k <= r - l + 1)
    {
        int pos = partition(arr, l, r); // position of pivot element

        if (pos - l == k - 1) // This is to check if the pivot element - intial index itself give us the correct value for k-1, if yes the return the arr[pos]
        {
            return arr[pos];
        }
        else if (pos - l > k - 1)
        {
            // And if you find that the value of k-1 resides to the left of the pivot value then you must call a recursive function with the following params
            kth_smallest(arr, l, pos - 1, k);
        }
        else
        // And in case the value of k-1 resides to the right of the pivot value then you must call a recursive function with the following params
        {
            kth_smallest(arr, pos + 1, r, k - pos + l - 1);
            // Here if the k falls in the category of the right array then the k would be changed such that we need to adjust it like remove the pivot element index = pos from it and add the intial index value to it here it would be l and then again remove 1 from it to get the correct index (1 is removed as it zero based indexing)
        }
    }
    return arr[k - 1];
    // It is an int function because the
}
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int arr[] = {1, 2, 7, 5, 4, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    cout << kth_smallest(arr, 0, n - 1, k) << endl;

    return 0;
}