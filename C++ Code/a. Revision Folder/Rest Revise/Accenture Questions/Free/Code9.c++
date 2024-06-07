/*
Problem 9 :
Problem Statement:
Vaibhav protected his confidential information by encrypting it using a cipher. This Cipher shifts each letter by a number of letters. If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

Original alphabet:      abcdef-ghijkl-mnopqr-stuvwx-yz

Alphabet rotated +3:    defghi-jklmno-pqrstu-vwxyza-bc

Note: The cipher only encrypts letters; symbols, such as -, remain unencrypted.This Cipher is also known as Caesar Cipher.



Input Format
The first line contains the integer, n , the length of the unencrypted string.
The second line contains the unencrypted string, s .
The third line contains k, the number of letters to rotate the alphabet by.

Output Format
For each test case, print the encoded string.

Sample Input
11
middle-Outz
2

Sample Output
okffng-Qwvb
*/

#include <iostream>
using namespace std;

string result(int N, int K, string s)
{
    int len = s.length();

    for (int i = 0; i < len; ++i)
    {
        if (65 <= s[i] and s[i] <= 90)
            s[i] = char(65 + ((s[i] - 65) + K) % 26);
        else if (97 <= s[i] and s[i] <= 122)
            s[i] = char(97 + ((s[i] - 97) + K) % 26);
    }
    return s;
}

int main()
{
    int N, K;
    string s;

    cin >> N;
    cin.ignore(); // Consume the newline character

    getline(cin, s);

    cin >> K;

    cout << result(N, K, s) << endl;
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<char> result(int N, int K, vector<char> s)
// {
//     for (int i = 0; i < N; ++i)
//     {
//         if (65 <= s[i] and s[i] <= 90)
//             s[i] = char(65 + ((s[i] - 65) + K) % 26);
//         else if (97 <= s[i] and s[i] <= 122)
//             s[i] = char(97 + ((s[i] - 97) + K) % 26);
//     }
//     return s;
// }

// int main()
// {
//     int N, K;

//     cin >> N;

//     vector<char> s(N);

//     for (int i = 0; i < N; i++)
//     {
//         cin >> s[i];
//     }

//     cin >> K;

//     vector<char> resultVec = result(N, K, s);

//     for (int i = 0; i < N; i++)
//     {
//         cout << resultVec[i];
//     }

//     cout << endl;
//     return 0;
// }
