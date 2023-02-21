#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> createSpiralMatrix(int n)
{
    vector<vector<int >> matrix (n, vector<int> (n));

    int left =0; 
    int right = n -1;
    int top = 0;
    in

}

int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);

int n;
cin >> n;

vector<vector<int>> matrix(n, vector<int>(n));

matrix = createSpiralMatrix(n);
for(int i = 0; i< n; i++)
{
    for(int j =0; j< n; j++)
    {
            cin >> matrix[i][j];
    }
}

    return 0;
}