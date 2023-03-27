// #include<bits/stdc++.h> // HEADER FILE
    
// using namespace std;
    
// int main() // MAIN DEFINATION
// {
//     ios_base::sync_with_stdio(false);  //For fast I/O
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i =0; i<n; i++)
//     {
//         cin >> array[i];
//     }

//     sort(array, array + n);
//     int ans = 0;
//     for(int i =0; i<n; i++)
//     {
//         for(int j =i+1; j<n; j++)
//         {
//             if(array[i]+array[j] == array[n-1])
//             {
//                ans = array[n-1];
//             }
//             else{
//                 ans = 0;
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int reverse(int n);
        {
            int rev = 0;
            while (n != 0)
            {
                rev = (rev * 10) + (n % 10);
                n /= 10;
            }
            return rev;
        }
        void getSum(int n);
        {
            n = reverse(n);
            int sumOdd = 0, sumEven = 0, c = 1;

            while (n != 0)
            {

                if (c % 2 == 0)
                    sumEven += n % 10;
                else
                    sumOdd += n % 10;
                n /= 10;
                c++;
            }
            int ans = abs(sumEven - sumOdd);
            cout << ans << endl;
        }
        return 0;
    }
}