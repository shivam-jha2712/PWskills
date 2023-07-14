#include <iostream>
#include <string>
using namespace std;

string LetterCapitalize(string str)
{

    // code goes here
    for (int c = 0; c < str.length(); c++)
    {
        if ((c == 0) || (str[c - 1] == ' '))
        {
            if (str[c] >= 'a' && str[c] <= 'z')
            {
                str[c] = str[c] + ('A' - 'a');
            }
        }
    }
    return str;
}

int main()
{

    // keep this function call here
    cout << LetterCapitalize(gets(stdin));
    return 0;
}