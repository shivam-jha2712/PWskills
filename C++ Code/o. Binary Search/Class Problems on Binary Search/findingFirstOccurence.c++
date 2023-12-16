#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int firstOccurence(vector<int> &input, int l, int r, int target)
{
    /*
    Time: O(logN)
    Space: O(logN)
    */

    if (l > r)
        return -1;

    // int mid = (l + r) / 2;
    int mid = l + (r - l) / 2; // Modified to tackle overflow

    if (input[mid] == target)
    {
        if(input[mid-1] == target)
        {
            return firstOccurence(input, l, mid - 1, target);
        }
        else
        {
            return mid;
        }
    }
        
    if (input[mid] < target)
    {
        return firstOccurence(input, mid + 1, r, target);
    }
    else
    {
        return firstOccurence(input, l, mid - 1, target);
    }
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
    cout << firstOccurence(v, 0, n - 1, target);

    return 0;
}