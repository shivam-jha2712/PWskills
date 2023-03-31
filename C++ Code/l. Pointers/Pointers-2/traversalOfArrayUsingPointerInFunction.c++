#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;

// Traversal Of Array Using Pointer In Function
void process(int *arr, int n)
{
    // Inide this function we have the access of the same as in main 
    // As we are accessing it by th help of pointers

    cout << "Printing the values using *(arr + i): " << endl;
    for(int i=0; i<n; i++)
    {
        cout << *(arr + i) << endl;
    }
// This is the shorthand of *(arr + i)

    cout << "Logic behind arr[i] is internally the same as *(arr + i): " << endl;
    cout << "arr[i] is the shorthand of *(arr + i): " << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << endl;
    }

    *(arr + 1) = 0;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    
    int arr[3] = {5,7,9};
    process(arr, 3);

    // Since the complete functions deals in the idealogy of pass by refrence thus if we now print it it will be changed as per changes made in line 20
    for(int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    } 
    return 0;
}