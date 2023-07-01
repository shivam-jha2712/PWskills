#include <bits/stdc++.h> // HEADER FILE
#include <map>

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    map<string, int> phoneBook;

    phoneBook["Anurag"] = 12345;
    phoneBook["Hitesh"] = 67890;
    phoneBook["Urvi"] = 98765;
    phoneBook["Sanket"] = 54321;

    // And note this that the printing would be in ascending order
    for (auto element : phoneBook)
    {
        cout << "Name -" << element.first << endl;
        cout << "Phone -" << element.second << endl;
        cout << endl;
    }

    return 0;
}