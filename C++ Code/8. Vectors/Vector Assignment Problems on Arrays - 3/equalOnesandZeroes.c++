#include<bits/stdc++.h>
using namespace std;

void equalOnesAndZeroes(vector<int> &v)
{
    int zeroes_count =0;
    int ones_count =0;
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i]=0)
        {
            zeroes_count++;
        }
        if(v[i]=1)
        {
            ones_count++;
        }
    }
}

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     int n;
     cin >> n;

     vector<int> v;
     for(int i = 0; i< n; i++)
     {
        int ele;
        cin >> ele;
        v.push_back(ele);
     }     

     equalOnesAndZeroes(v);
     return 0;
}