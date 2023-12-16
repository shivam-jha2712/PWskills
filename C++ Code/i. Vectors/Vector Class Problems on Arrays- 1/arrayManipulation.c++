#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);

// int array[] = {2,3,1,3,2,4,1};
int size;
cin >> size;
int array[size];
for(int i = 0; i< size ; i++)
{
    cin >> array[i];
}
for(int i = 0; i<size; i++)
{
    for(int j = i+1; j<size; j++ )
    {
    if(array[i] == array[j] ){
        array[i] = array[j] = -1;
    }
    }
}

for(int i = 0; i<size; i++)
{
    if(array[i]!= -1 )
    {
        cout << array[i] << endl;
    }
}
 return 0;
}