#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);
    int n;
    cin >> n;
    int arr[n+1];

    arr[0] = 0;
    arr[1] = 1;
    for(int i =2; i< n+1; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
cout  << "Method 1: " << endl;    
cout << arr[n] << endl;
cout  << "Space Complexity: O(n)" << endl;
cout  << "Time Complexity: O(n)" << endl;



    int a = 0;
    int b = 1;
    int c = a + b;
    for(int i =2; i< n+1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    // Here instead of iterating through the cpomplete array and getting the complete "n" iteration here we are maintaining just the prior two elements to get it done
cout  << "Method 2: " << endl; 
if (n == 0 || n == 1)
{
    cout << n << endl;
}
else{
cout << c << endl;
}   
cout  << "Space Complexity: O(1)" << endl;
cout  << "Time Complexity: O(n)" << endl;
    return 0;
}