#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    
    // Implementaion of Pre=Increment
    int arr[2] = {7,5};
    int  *ptr = &arr[0];

// 1-  Here what happes is first pointer value is incremented (as every operation moves from right to left) thus now on incrementing it will be pointing to bucket storing arr[1] then (*-Derefrencing Operator) is used thus it will give the value at arr[1]. (Since upon incrementing with ++ptr it pointed to arr[1])
cout << "On Using *++ptr on arr{7,5} : " << endl;
    cout << *++ptr << endl;

// Also note this above operation will have no effect on the array in genral
    cout << arr[0] << " " << arr[1] << endl;


    return 0;
}