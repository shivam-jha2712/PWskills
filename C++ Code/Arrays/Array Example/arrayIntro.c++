#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int array[] = {1, 2, 3, 4, 5};
    // Printing the size of memory allocated to the array
    cout << "Size of Array :" << sizeof(array) << endl;
    // Printing the length of the memory allocated to the array
    int length = sizeof(array) / sizeof(array[0]);
    cout << "Length of Array :" << length << endl;

    // For array Traversal using loops

    // 1. Using For Loop
    cout << "Printing the array using For loop " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << endl;
    }

    // 2. Using ForEach Loop
    // In For each loop the constraint is that you cannot print it flexibly and instead you will be printing the complete array at once.
    cout << "Printing the array using ForEach loop " << endl;
    for (int ele : array)
    {
        cout << ele << endl;
    }
    // 3. Using While Loop
    cout << "Printing the array using While loop " << endl;
    int j = 0;
    while (length--)
    {
        cout << array[j] << endl;
        j++;
    }
    return 0;
}