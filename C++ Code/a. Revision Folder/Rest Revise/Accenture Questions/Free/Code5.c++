/*
Accenture Coding Question 5: -
Two government agencies Research and Analysis Wing(RAW) and Intelligence Bureau (IB) want to encrypt their conversations so that they can save themselves from interception by any other  agency so they invent a new cipher.

Every message is encoded to its binary representation. Then it is written down k times, shifted by 0,1,….,k-1 bits. Each of the columns is XORed together to get the final encoded string.

If b = 1001011and k = 4 it looks like so:

 1001011     shift 0

01001011    shift 1

001001011   shift 2

0001001011  shift 3

———-

1110101001  <- XORed/encoded string s

Now we have to decode the message. We know that k = 4 . The first digit in s = 1 so our output string is going to start with 1 . The next two digits are also 1 , so they must have been XORed with 0. We know the first digit of our 4th shifted string is a 1 as well. Since the 4th digit of s is 0, we XOR that with our 1 and now know there is a 1 in the 4th position of the original string. Continue with that logic until the end.

Then the encoded message s and the key k are sent to the Intelligence Bureau(IB).

RAW is using this encoding algorithm and asks IB to implement a decoding algorithm. Can you help IB implement this?

Input Format
The first line contains two integers n and k , the length of the original decoded string and the number of shifts.
The second line contains the encoded string s consisting n+k-1 of ones and zeros.

Output Format
Return the decoded message of length n, consisting of ones and zeros.

Sample Input
7 4
1110100110

Sample Output
1001010

Explanation
1001010
1001010
1001010
1001010
———-
1110100110

Solution-

*/

#include <string>
#include <iostream>
using namespace std;

string solve(int n, int k, const string &s)
{
    string res = "";
    bool x = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i >= k)
        {
            x ^= res[i - k] - '0';
        }
        res.push_back('0' + ((s[i] - '0') ^ x));
        x ^= res.back() - '0';
    }
    return res;
}

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    cout << solve(n, k, s);
    return 0;
}