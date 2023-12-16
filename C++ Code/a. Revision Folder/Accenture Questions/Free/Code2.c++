#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    return 0;
}

vector<int> print_sieve(int &x)
{
    vector<int> ans;
    int i, temp, digit;
    bool check;

    for (i = 0; i <= x; i++)
    {
        if (i < 10)
        {
           ans.push_back(i);
            continue;
        }
        check = 1;
        temp = i;
        digit = temp % 10;
        temp /= 10;
        while (temp)
        {
            if (abs(digit - temp % 10) != 1)
            {
                check = 0;
                break;
            }
            digit = temp % 10;
            temp /= 10;
        }
        if (check)
            ans.push_back(i);
    }
}