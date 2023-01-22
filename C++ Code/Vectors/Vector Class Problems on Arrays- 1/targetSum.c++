#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cout << "Enter Array Size: " << endl;
    cin >> n;

    int array[n];
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int targetSum;
    cout << "Enter Target Sum of the element: " << endl;
    cin >> targetSum;

    int countTarget = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) //  Here j is iterated from i+1 and not 0 because when the target sum needs to be calculated we need to fix the first element of the array and then sum it to all the rest elements following it to find the target element.

        // And we do this to ensure that pairs are not be counted twice because if we do iterate the second loop from 0 then it would recount the pairs
        {
            if (array[i] + array[j] == targetSum)
            {
                countTarget++;
            }
        }
    }

    cout << "No of pairs of countTarget : " << countTarget << endl;

    return 0;
}