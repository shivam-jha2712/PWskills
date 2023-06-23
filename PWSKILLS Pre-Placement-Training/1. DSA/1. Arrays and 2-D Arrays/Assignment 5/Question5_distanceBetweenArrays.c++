/*
<aside>
💡 **Question 5**

Given two integer arrays arr1 and arr2, and the integer d, *return the distance value between the two arrays*.

The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.

**Example 1:**

**Input:** arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2

**Output:** 2

**Explanation:**

For arr1[0]=4 we have:

|4-10|=6 > d=2

|4-9|=5 > d=2

|4-1|=3 > d=2

|4-8|=4 > d=2

For arr1[1]=5 we have:

|5-10|=5 > d=2

|5-9|=4 > d=2

|5-1|=4 > d=2

|5-8|=3 > d=2

For arr1[2]=8 we have:

**|8-10|=2 <= d=2**

**|8-9|=1 <= d=2**

|8-1|=7 > d=2

**|8-8|=0 <= d=2**

</aside>
*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int findDistance(vector<int> arr1, vector<int> arr2, int d)
{
    int distance = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        bool found = false;
        for (int j = 0; j < arr2.size(); j++)
        {
            if (abs(arr1[i] - arr2[j]) <= d)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            distance++;
        }
    }
    return distance;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;

    vector<int> u(n);
    vector<int> v(m);

    for (int i = 0; i < n; i++)
    {
        cin >> u[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    int d;
    cin >> d;

    int distance = findDistance(u, v, d);

    cout << "distance: " << distance << endl;
    return 0;
}