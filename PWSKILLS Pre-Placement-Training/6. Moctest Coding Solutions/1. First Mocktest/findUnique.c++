#include <bits/stdc++.h> // HEADER FILE

using namespace std;

const int MAX_CHAR = 256; // Max character length in ASCII

int findUniques(string str)
{
    int n = str.size();

    int freq[MAX_CHAR] = {0}; // mapping all of them to be 0s
    for (char ch : str)
    {
        freq[ch]++;
    }

    for(int i = 0; i < n; i++)
    {
        if(freq[str[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    cout << findUniques(str) << endl;

    return 0;
}



