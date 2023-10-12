/*
Coding Question 13
Instructions: You are required to write the code. You can click on compile and run anytime to check compilation/execution status. The code should be logically/syntactically correct.

Question: Write a program in C such that it takes a lower limit and upper limit as inputs and print all the intermediate pallindrome numbers.

Test Cases:

TestCase 1:
Input :
10 , 80
Expected Result:
11 , 22 , 33 , 44 , 55 , 66 , 77.

Test Case 2:
Input:
100,200
Expected Result:
101 , 111 , 121 , 131 , 141 , 151 , 161 , 171 , 181 , 191.
*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool checkPalindrome(int x)
{

    string s = to_string(x);
    string temp = s;

    reverse(s.begin(), s.end());

    return (s == temp);

    // int reverse = 0;
    // int temp = n;
    // while (temp != 0)
    // {
    //     reverse = (reverse * 10) + (temp % 10);
    //     temp = temp / 10;
    // }
    // return (reverse == n);
}

vector<int> solve(int a, int b)
{
    vector<int> ans;
    for (int i = a; i < b; i++)
    {
        if (checkPalindrome(i))
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    vector<int> ans = solve(a, b);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}