#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int merge(vector<int> &arr, int left, int mid, int right)
{
    int inversionCount = 0;

    // Create temporary arrays to store the two halves
    vector<int> leftArray(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightArray(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left;

    while (i < leftArray.size() && j < rightArray.size())
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k++] = leftArray[i++];
        }
        else
        {
            arr[k++] = rightArray[j++];
            inversionCount += mid - left + 1 - i; // Count the split inversions
        }
    }

    // Copy the remaining elements of the leftArray, if any
    while (i < leftArray.size())
    {
        arr[k++] = leftArray[i++];
    }

    // Copy the remaining elements of the rightArray, if any
    while (j < rightArray.size())
    {
        arr[k++] = rightArray[j++];
    }

    return inversionCount;
}

int mergeSort(vector<int> &arr, int left, int right)
{
    int inversionCount = 0;

    if (left < right)
    {
        int mid = left + (right - left) / 2;

        inversionCount += mergeSort(arr, left, mid);      // Count inversions in the left half
        inversionCount += mergeSort(arr, mid + 1, right); // Count inversions in the right half
        inversionCount += merge(arr, left, mid, right);   // Merge the two halves and count split inversions
    }

    return inversionCount;
}

int inversionCount(vector<int> &arr)
{
    return mergeSort(arr, 0, arr.size() - 1);
}

int main()
{
    // Read the array from user input
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int inversionPair = inversionCount(numbers);
    cout << "Inversion Pairs: " << inversionPair << endl;

    return 0;
}