#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string str;
    cin >> str;

    unordered_set<char> set1;

    for (auto it : str)
    {
        set1.insert(it);
    }

    int n = set1.size();
    if (n % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}