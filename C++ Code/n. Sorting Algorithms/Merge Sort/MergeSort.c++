#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    // Create two empty temp arrays to store data elements accordingly
    int an = mid - l + 1; // Defining size of left array
    int bn = r - mid;     // Defining size of right array

    int a[an]; // Left Temp Array
    int b[bn]; // Right Temp Array

    for (int i = 0; i < an; i++)
    {
        a[i] = arr[l + i]; // Stroing the elements of original array in the temp arrays
    }
    for (int j = 0; j < bn; j++)
    {
        b[j] = arr[mid + 1 + j]; // Stroing the elements of original array in the temp arrays
    }

    int i = 0; // Intial index of first subarray, a
    int j = 0; // Intial index of second subarray, b
    int k = l; // Intializing the merged (output) subarray first index as k = l

    // Placing the elements in the array
    while (i < an && j < bn)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }

    // Now it might be the case that all the elemnts have not been placed and the pointers if i or j has not been moved to its last position
    while (i < an)
    {
        arr[k++] = a[i++];
    }
    while (j < bn)
    {
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int l, int r)
{
    // base case: When the smallest set of solution is reached
    if (l >= r)
    {
        return;
    }

    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int arr[] = {9, 2, 6, 4, 7, 3, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // int l = 0;
    // int r = n - 1;

    mergeSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// For merging two sorted arrays -

/*

// Note that the size of arrays is determined prior itself 

void mergearrays (int a[], int b[], int n1, int n2, int arr[] ) 
{
int i = 0; // Intial index of first subarray, a
    int j = 0; // Intial index of second subarray, b
    int k = 0; // Intializing the merged (output) subarray first index as k = l

    // Placing the elements in the array
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }

    // Now it might be the case that all the elemnts have not been placed and the pointers if i or j has not been moved to its last position
    while (i < n1)
    {
        arr[k++] = a[i++];
    }
    while (j < n2)
    {
        arr[k++] = b[j++];
    }
}

*/ 