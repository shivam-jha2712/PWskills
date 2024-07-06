#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINITION
{
    string str1, str2;
    cin >> str1 >> str2;

    // Convert both strings to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Compare the strings lexicographically
    int ans = 0;
    for (int i = 0; i < str1.size() && i < str2.size(); i++)
    {
        if (str1[i] < str2[i])
        {
            ans = -1;
            break;
        }
        if (str1[i] > str2[i])
        {
            ans = 1;
            break;
        }
    }

    // If one string is a prefix of the other
    if (ans == 0)
    {
        if (str1.size() < str2.size())
        {
            ans = -1;
        }
        else if (str1.size() > str2.size())
        {
            ans = 1;
        }
    }

    cout << ans << endl;
    return 0;
}
