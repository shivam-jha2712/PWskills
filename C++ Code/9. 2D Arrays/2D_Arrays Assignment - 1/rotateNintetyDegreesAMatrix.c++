#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);
 
 int n;
 cin >> n;

 int A[n][n];

for(int  i=0; i< n; i++)
{
    for(int j =0; j< n; j++)
    {
        cin >> A[i][j];
    }
}

/*In order to rotate it by 90 degrees what we need to do is create a transopse first
followed by swapping the elements of diagonal elements with there corresponding counters  
*/

// Creating Transpose
int transpose[n][n];
for(int  i=0; i< n; i++)
{
    for(int j =0; j< n; j++)
    {
        transpose[i][j] =  A[j][i];
    }
}


// Swapping the diagonal Elements
for(int  i=0; i< n; i++)
{
    for(int j =0; j< n/2; j++)
    {
        swap(transpose[i][j],transpose[i][n-j-1]);
    }
}

// Printing the 90 Degree rotated matrix
for(int  i=0; i< n; i++)
{
    for(int j =0; j< n; j++)
    {
       cout <<  transpose[i][j] << " ";
    }
    cout << endl;
}
    return 0;
}