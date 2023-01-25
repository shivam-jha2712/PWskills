#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    vector<int> arr1;
    vector<int> arr2;

    for (int i = 0; i < 3; i++)
    {
        int element;
        cin >> element;
        arr1.push_back(element);
    }
    for (int i = 0; i < 3; i++)
    {
        int element;
        cin >> element;
        arr2.push_back(element);
    }
// The vector 3 which is the container array thus, we need the size of both the arrays that are to be merged.
    vector<int> arr3(arr1.size() + arr2.size());
    merge(arr1.begin(),
          arr1.end(),
          arr2.begin(),
          arr2.end(),
          arr3.begin());
          // The merge() function for vector is taking 5 inputs 
          // first iterartor of vector 1
          // second iterartor of vector 2
          // first iterartor of vector 1
          // second iterartor of vector 2
          // first iterartor of vector 3 - or result vector (This is pointing to the beginning of the vector where the next set of data will be stored)

    sort(arr3.begin(), arr3.end());
    // sort() function takes in the fisrt iterartor and the last iterartor in order to make them function all together
  
    cout << "Sorted \n";
    for (auto x : arr3)
        cout << x << " ";
    return 0;
}

// They have used the concept of pointers instead you can even use the concept of simply getting two vectors then merging them followed by sorting them all together