#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// DO THIS IN JAVA IN THAT IT IS VERY EASY

int main() // MAIN DEFINATION
{
    string str;
    cout << "Enter The String : ";
    getline(cin, str);

    int i, j;

    // Iterating each character and removing non alphabetical characters.
    for (i = 0; str[i] != '\0'; ++i)
    {
        while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0'))
        {
            for (j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }

    cout << "After removing all except alphabets: " << str << endl;

    return 0;
}