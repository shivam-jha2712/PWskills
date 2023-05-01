#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int firstOccurence(vector<int> &v, int target)
{
    int lo = 0;
    int hi = v.size()-1;
    int ans1 = -1;

    while(lo <= hi)
    {
        int mid = lo + (hi + lo) / 2;
        if(v[mid] == target)
        {
            ans1 = mid;
            hi = mid - 1;
        }
        else if(v[mid] > target)
        {
            hi = mid-1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans1;
}
int lastOccurence(vector<int> &v, int target)
{
    int lo = 0;
    int hi = v.size() - 1;
    int ans2 = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi + lo) / 2;
        if (v[mid] == target)
        {
            ans2 = mid;
            lo = mid + 1;
        }
        else if (v[mid] > target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans2;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;

    cout << firstOccurence(v, target)  << lastOccurence(v, target) ;
    // << "[" << "," << "]"
    return 0;
}