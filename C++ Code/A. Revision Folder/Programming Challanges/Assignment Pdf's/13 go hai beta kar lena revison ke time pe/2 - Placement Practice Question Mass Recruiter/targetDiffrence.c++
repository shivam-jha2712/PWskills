#include<bits/stdc++.h>
using namespace std;


int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     int n;
     cin >> n;
     
     int target ;
     cin >> target;

    vector<int> v;

     for(int i =0; i<n; i++)
     {
        int ele;
        cin >> ele;
        v.push_back(ele);
     }
    int count = 0;
    for(int i =0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(abs(v[i]-v[j]) == target)
            {
                count++;
            }
        }
    }
    cout << count << endl;
     


     return 0;
}