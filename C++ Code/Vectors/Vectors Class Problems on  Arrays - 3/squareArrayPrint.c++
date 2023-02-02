#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
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

    
    for (int i = 0; i < n; i++)
    {
        array[i] =  pow(array[i],2);
    }

    sort(array, array + n);

    cout << "Sorted Square Elements Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
     return 0;
}