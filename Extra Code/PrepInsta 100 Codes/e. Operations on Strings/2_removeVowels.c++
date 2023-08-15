#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// DO THIS IN JAVA IN THAT IT IS VERY EASY

int main() // MAIN DEFINATION
{
    string s;
    cout << "Enter the String: ";
    getline(cin, s);

    int n = s.size();

    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
        {
            // deleting vowels by shifting left all upcoming characters left
            for (int j = i; j < n; j++)
            {
                s[j] = s[j + 1];
            }
            i--;
            n--;
        }
    }

    cout << "On removal of Vowels the given String : " << s << endl;
    // cout << "Count of Vowels in given String : " << count_Vowels << endl;
    return 0;
}