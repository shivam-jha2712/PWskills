#include<bits/stdc++.h>
using namespace std;

void runningSum(vector<int> &v)
{
    for(int i = 1; i<v.size(); i++)
    {
        v[i]+=v[i-1];
    }

    return;
}

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     int n;
     cin >> n;

     vector<int> v;
     for(int i=0; i<n; i++)
     {
        int ele;
        cin >> ele;
        v.push_back(ele);
     }

     runningSum(v);


     for(int i=0; i<n; i++)
     {
        cout << v[i] << " ";
     }
     cout << endl;
     return 0;
}