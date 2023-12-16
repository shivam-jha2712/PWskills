#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// DO THIS IN JAVA IN THAT IT IS VERY EASY

int main() // MAIN DEFINATION
{
    string str;
    cout << "Enter The String : ";
    getline(cin, str);

    str.erase(remove_if(str.begin(), str.end(), [](char c)
                        { return (c == '{' || c == '}' || c == '(' || c == ')' || c == '[' || c == ']'); }),
              str.end());
    // remove_if is one of the versions of this and you can use that in question 2
    // Here the syntax follows like str.erase(reomve_if(str.begin(), str.end(),[](char c) { return (//conditions )} , str.end());

    cout << "After removing all Spaces: " << str << endl;

    return 0;
}