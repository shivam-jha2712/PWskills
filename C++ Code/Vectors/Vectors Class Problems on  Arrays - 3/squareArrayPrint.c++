// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//      ios_base::sync_with_stdio(false);
//      cin.tie(0);
//      cout.tie(0);
//      int n;
//      cout << "Enter Array Size: " << endl;
//      cin >> n;

//     int array[n];
//     cout << "Enter Array Elements: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

    
//     for (int i = 0; i < n; i++)
//     {
//         array[i] =  pow(array[i],2);
//     }

//     sort(array, array + n);

//     cout << "Sorted Square Elements Array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
//      return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     int arr[] = {-4,-3,-1,0,2,10};
     int n = 6;

     int result[n];
     int i = 0;
     int j = n-1;
     int k = n-1;

     while(i <= j && k >= 0)
     {
        if(abs(arr[i]) > abs(arr[j]))
        {
            result[k] = arr[i]*arr[i];
            i++;
            k--;
        }
        else{
            result[k] = arr[j]*arr[j];
            j--;
            k--;
        }
     }

    //  For display of result
    for(int k = 0; k<n; k++)
    {
        cout << result[k] << " ";
    }
    cout << endl;

     return 0;
}