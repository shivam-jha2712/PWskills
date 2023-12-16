/*
9. Perform the function Int calculate(int m, int n). This function needs two positive integers. Calculate the sum of numbers between these two numbers that are divisible by 3 and 5.
Assumption
m > n > = 0

Example

Input:
m: 12
n: 50

Output:
90

Explanation
The numbers between 12 and 50 that are divisible by 3 and 5 are 15, 30, and 45. The sum of these numbers is 90.

Sample input:
m: 100
n: 160

Sample output:
405
*/
#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int calculate(int m, int n)
{
    int ans = 0;
    for (int i = m; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            ans += i;
        }
    }
    return ans;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;

    cout << calculate(m, n);
    return 0;
}