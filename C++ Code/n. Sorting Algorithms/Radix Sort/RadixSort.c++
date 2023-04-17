#include <bits/stdc++.h>
using namespace std;

// Function to get the largest element from an array
int getMax(int array[], int n)
{
    int max = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}

// Using counting sort to sort the elements in the basis of significant places
void count(int arr[], int n, int p)
{
    const int max = 10;
    int ans[n];
    int freq[max];

    for (int i = 0; i < max; ++i)
        freq[i] = 0;

    // Calculate frequency of elements
    for (int i = 0; i < n; i++)
        freq[(arr[i] / p) % 10]++;

    // Calculate cumulative frequency
    for (int i = 1; i < max; i++)
        freq[i] += freq[i - 1];

    // Place the elements in sorted order
    for (int i = n - 1; i >= 0; i--)
    {
        ans[freq[(arr[i] / p) % 10] - 1] = arr[i];
        freq[(arr[i] / p) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = ans[i];
}

// Main function to implement radix sort
void radix(int arr[], int n)
{
    // Get maximum element using inbuilt function
    int max = *max_element(arr, arr + n);

    // Apply counting sort to sort elements based on place value.
    for (int i = 1; max / i > 0; i *= 10)
        count(arr, n, i);
}

// Driver code
int main()
{
    int arr[] = {139, 234, 645, 32, 2, 67, 677};
    int n = sizeof(arr) / sizeof(arr[0]);
    radix(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}