#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
        return false;

    unordered_map<char, char> sMap, tMap;

    for (int i = 0; i < s.size(); i++)
    {
        char sChar = s[i];
        char tChar = t[i];

        if (sMap.count(sChar) && sMap[sChar] != tChar)
            return false;

        if (tMap.count(tChar) && tMap[tChar] != sChar)
            return false;

        sMap[sChar] = tChar;
        tMap[tChar] = sChar;
    }

    return true;
}

int main()
{
    string s = "egg";
    string t = "add";

    bool isomorphic = isIsomorphic(s, t);

    // Print the result
    cout << (isomorphic ? "true" : "false") << endl;

    return 0;
}
