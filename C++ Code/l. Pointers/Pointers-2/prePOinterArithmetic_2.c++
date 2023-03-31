#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Implementaion of Pre=Increment
    int arr[2] = {7, 5};
    int *ptr = &arr[0];

    //  Here is what happens over here is first the pointer is derefrenced thus the value of arr[0] = 7 is found followed by (++) incrementing it. Thus value of arr[0] is incremented by 1.

    cout << "On Using ++*ptr on arr{7,5} : " << endl;
    cout << ++*ptr << endl;

    // Also note this above operation will have incremented arr[0] by 1;
    cout << arr[0] << " " << arr[1] << endl;

    return 0;
}