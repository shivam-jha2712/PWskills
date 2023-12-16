#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int modifiedNum(int num)
{
    string str = to_string(num);

    int n = str.size();
    for(int i = 0; i < n; i++)
    {
        if(str[i] == '0')
        {
            str[i] = '5';
        }
    }
    int ans = stoi(str);
    return ans;
}

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the Number to be modified: ";
    cin >> n;

    cout << modifiedNum(n) << endl;
    return 0;
}