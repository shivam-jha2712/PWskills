#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        // Here the number of comparisons in each pass will get reduced by i - See example to know more
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// int arr[] = {20, 50, 40, 10, 30};

// Given Array - 20, 50, 40, 10, 30;

// First Pass:
/*
20 50 40 10 30
20 40 50 10 30
20 40 10 50 30
20 40 10 30 50
*/

// Seccond Pass:
/*
20 40 10 30 50
20 10 40 30 50
20 10 30 40 50
*/

// Third Pass:
/*
20 10 30 40 50
10 20 30 40 50
*/

// Fourth Pass: - (n-1)th pass
/*
10 20 30 40 50
*/

// In case of n elements in the array the total number of passes required for the algorithm to work would be n-1
// As it basically in each pass places n-1 elements in correct position
// which is equivalent to getting n elements in correct position.

// Similarly for the "j" loop in which in each pass we could see that the number of comparison is always "i" less than the number of comparisons done in the previous pass.