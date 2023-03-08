#include <bits/stdc++.h>
using namespace std;
int largestElementIndex(int array[], int size)
{
    int max = INT_MIN;
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main()
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    // Finding the largest element for the first time...
    int indexOfLargest = largestElementIndex(array, size);
    int largestelement = array[indexOfLargest];

    // if found the largest element then simply replace it with "-1"
    for (int i = 0; i < size; i++)
    {
        if (array[i] == largestelement)
        {
            array[i] = -1;
        }
    }
    // Again finding the largest element and then printing it
    int indexOfSecondLargest = largestElementIndex(array, size);

    cout << array[indexOfSecondLargest] << endl;

    return 0;
}