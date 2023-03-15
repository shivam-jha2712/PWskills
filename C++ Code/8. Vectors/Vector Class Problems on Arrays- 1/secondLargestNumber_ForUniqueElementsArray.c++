#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);

int size;
cin >> size;

int array[size];
for(int i= 0; i< size; i++)
{
    cin >> array[i];
}

sort(array, array +size);

cout << array[size-2] << endl; 
// This would only work if all the elements are unique;
 return 0;
}
// The above solution is done using sort function

// #include <bits/stdc++.h>
// using namespace std;
// int largestElementIndex(int array[], int size)
// {
//     int max = INT_MIN;
//     int maxindex = -1;
//     for(int i= 0; i< size ; i++)
//     {
//         if(array[i]> max)
//         {
//             max = array[i];
//             maxindex=i;
//         }
//     }
//     return maxindex;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false); // For fast I/O
//     cin.tie(0);
//     cout.tie(0);
//     int size;
//     cin >> size;

//     int array[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> array[i];
//     }

//     int indexOfLargest = largestElementIndex(array, size);

//     array[indexOfLargest] = -1;
//     int indexOfSecondLargest = largestElementIndex(array, size);

//     cout << array[indexOfSecondLargest] << endl;

//     return 0;
// }