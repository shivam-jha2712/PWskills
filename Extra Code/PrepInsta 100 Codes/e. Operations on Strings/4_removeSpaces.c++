#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// DO THIS IN JAVA IN THAT IT IS VERY EASY

int main() // MAIN DEFINATION
{
    string str;
    cout << "Enter The String : ";
    getline(cin, str);

    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    // remove_if is one of the versions of this and you can use that in question 2

    cout << "After removing all Spaces: " << str << endl;

    return 0;
}