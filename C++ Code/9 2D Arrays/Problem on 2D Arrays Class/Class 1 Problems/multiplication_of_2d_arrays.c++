#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);

int r1, c1;
int r2, c2;
cout << "Enter the rows and columns for first matrix(rows columns) : " ;
cin >> r1 >> c1;

cout << "Enter the data for first matrix : " ;

int A[r1][c1];

for(int i =0; i<r1; i++)
{
    for(int j = 0; j<c1 ; j++)
    {
        cin >> A[i][j];
    }
}

cout << "Enter the rows and columns for second matrix(rows columns) : " ;
cin >> r2 >> c2;

cout << "Enter the data for second matrix : " ;
int B[r2][c2];

for(int i =0; i<r2; i++)
{
    for(int j = 0; j<c2 ; j++)
    {
        cin >> B[i][j];
    }
}

// condition for checking whether multiplication is possible or not
if (c1 != r2)
{
    cout << "Matrix Multiplication not possible" << endl;
}

cout << "Answer Matrix is as follows : "  << endl;

int C[r1][c2];

for(int i =0; i<r1; i++)
{
    for(int j =0; j<c2; j++)
    {
        int value = 0;
        for(int k =0; k<r2; k++)
        {
            value += A[i][k]*B[k][j]; 
        }
    C[i][j] = value;
    }
}

for(int i =0; i<r1; i++)
{
    for(int j=0; j<c2; j++)
    {
        cout << C[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}