// Approach : 3

// Time complexity : O(logn)
#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int findSquareroot(int n)
{
    // Since we know that the square root of the given number will always be within the range of [1, n];
    int lo = 1;
    int hi = n;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        // Now we take in check that if mid*mid <= n then it becomes certain that anything to the left of mid would be definetly less than n.
        // So we just it and keep on updating both the ans and the lo value.

        // There might be chances that the condition of mid*mid <= n will cause TLE thus we need to adjust the condition such as
        /*
        if(mid == x/mid)
        {
            return mid;
        }
        else if (mid > x / mid)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }

        return hi;
        */
        if (mid * mid <= n)
        {
            ans = mid;
            lo = mid + 1;
        }
        // And if incase it is not less thna n then the high value would be updated as follows.
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    cout << findSquareroot(n);
    return 0;
}

// Approach - 2

/*#include<bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
        if(pow(i,2)<= n)
        {
            ans = i;
        }
        else{
            break;
        }

    }
    cout << ans << endl;
    return 0;
}

*/
// Time Complexity : O(sqrt(n))

/*#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << floor(sqrt(n)) << endl;
    return 0;
}
*/