#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    // Use a temporary string to store the result
    string result;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'G')
        {
            // Skip 'G'
            continue;
        }
        else if (s[i] == 'E' && i + 1 < n && s[i + 1] == 'F')
        {
            // Skip 'E' and 'F'
            i++;
            continue;
        }
        else if (s[i] == '5' && i + 1 < n && s[i + 1] == '6')
        {
            // Skip '5' and '6'
            i++;
            continue;
        }

        // Append the current character to the result string
        result += s[i];
    }

    cout << result << endl;
    return 0;
}
