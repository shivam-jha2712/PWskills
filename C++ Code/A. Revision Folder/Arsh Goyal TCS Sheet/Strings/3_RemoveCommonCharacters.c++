#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string string1, string2;
    cout << "Enter a string1 : ";
    getline(cin, string1);
    cout << "Enter a string2 : ";
    getline(cin, string2);

    // we extract every character of string string 2
    for (auto it : string2)
    {
        // we find char exit or not
        while (find(string1.begin(), string1.end(), it) != string1.end())
        {
            auto itr = find(string1.begin(), string1.end(), it);
            // if char exit we simply remove that char
            string1.erase(itr);
        }
    }
    cout << "Answer String : " << string1 << endl;

    return 0;
}