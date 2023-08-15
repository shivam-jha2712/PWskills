#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    for (char &it : s) // this is used instead of for(auto it : s) 
    {
        if (it >= 'a' && it <= 'z')
        {
            it = it - 32;
        }
        else if (it >= 'A' && it <= 'Z')
        {
            it = it + 32;
        }
    }

    cout << "Toggled String is: " << s << endl;

    return 0;
}

/*
My code :

for (auto it : s)
{
    if (it >= 'a' && it <= 'z')
    {
        it = it - 32;
    }
    else if (it >= 'A' && it <= 'Z')
    {
        it = it + 32;
    }
}

The diffrence is that In this loop, it is a copy of the characters in the string, and modifying it won't actually change the original characters in the string s.

To fix this issue, you should use a reference to modify the characters in the original string. Here's the corrected version of the loop:


Given Code :

for (char &it : s)
{
    if (it >= 'a' && it <= 'z')
    {
        it = it - 32;
    }
    else if (it >= 'A' && it <= 'Z')
    {
        it = it + 32;
    }
}

Notice the use of char &it instead of auto it. This way, you're directly modifying the characters in the original string s.

*/