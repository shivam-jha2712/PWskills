#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    // Arrays has to be iterarted for n times(size of the array). So, Worst_Case time complexity == O(n);
    for(int i =0; i<size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}