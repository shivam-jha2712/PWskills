#include <bits/stdc++.h> // HEADER FILE

using namespace std;

string longestWord(string str)
{
    int count = 0;
    int n = str.length();
    string temp;

    for (int i = 0; i < n; i++)
    {
        if (str[i] != ' ')
        {
            temp.push_back(str[i]);
        }
        count = temp.length();
        temp = "";
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string str;
    getline(cin, str);

    cout << longestWord(str) << endl;

    return 0;
}