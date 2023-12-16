#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string s;
    cout << "Enter the String: ";
    getline(cin, s);

    int count_Vowels = 0;

    for (char &c : s)
    {

        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
        {
            count_Vowels++;
        }
    }

    cout << "Count of Vowels in given String : " << count_Vowels << endl;
    return 0;
}