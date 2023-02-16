#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int array[n];
    for(int i =0; i<n; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n);
    int ans = 0;
    for(int i =0; i<n; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            if(array[i]+array[j] == array[n-1])
            {
               ans = array[n-1];
            }
            else{
                ans = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}