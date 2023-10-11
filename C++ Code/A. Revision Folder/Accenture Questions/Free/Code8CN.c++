/*
8. Perform the function: Int operationchoices(int c, int n, int a, int b). This function considers three positive inputs of a, b and c.
Execute the function to get:
(a + b), if c = 1
(a / b), if c = 4
(a – b), if c = 2
(a x b), if c = 3

Example:

Input:
a: 12
b: 16
c: 1

Output:
28

Explanation
C = 1, hence the function is (a + b). Hence, the output is 28.

Sample input:
a: 16
b: 20
c: 2

Sample output:
–4
*/
#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int operationchoices(int a, int b, int c)
{
    int ans;
    if (c == 1)
    {
        ans = a + b;
    }
    else if (c == 2)
    {
        ans = a - b;
    }
    else if (c == 3)
    {
        ans = a * b;
    }
    else if (c == 4)
    {
        ans = a / b;
    }

    return ans;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    cout << operationchoices(a, b, c);

    return 0;
}