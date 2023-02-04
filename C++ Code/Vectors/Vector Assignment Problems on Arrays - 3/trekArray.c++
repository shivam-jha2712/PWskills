//The Given code is done by creating a new array and the data is in the new array of the summation stored
#include<bits/stdc++.h>
using namespace std;

void largestAltitude(vector<int>& gain) {
        int ans=0, sum=0;
        for (int i=0; i<gain.size(); i++){
            sum+=gain[i];
            ans= max(sum,ans);
        }

    cout << ans << endl;

        return ;
}


int main()
{
 ios_base::sync_with_stdio(false); // For fast I/O
 cin.tie(0);
 cout.tie(0);
 
 int n;
 cin >> n;

 vector<int> v;
 for(int i =0; i< n; i++)
 {
    int ele;
    cin >> ele;
    v.push_back(ele);
 }
 
 largestAltitude(v);
    return 0;
}

// https://www.bilibili.tv/en/video/2043175431