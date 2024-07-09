#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        map<char, int> count;
        for (char c : a)
        {
            count[c]++;
        }

        string difficulties = "ABCDEFG";
        int required_problems = 0;
        for (char d : difficulties)
        {
            int needed = m - count[d];
            if (needed > 0)
            {
                required_problems += needed;
            }
        }

        cout << required_problems << endl;
    }
    return 0;
}
