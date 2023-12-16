#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // "reverse" is used to reverse the string using the start and end pointers
    string str = "Hanuman";
    reverse(str.begin(), str.end());
    cout << str << endl;

    // "substr()" to find substring of the string
    string str1 = "HELLO";
    cout << str1.substr(0, 4) << endl;
    cout << str1.substr(1) << endl; // prints the complete string after the position uptill it finds the null character

    // Concatenation using "+" operator
    string str2 = "WORLD";
    cout << str1 + str2 << endl;

    // Concatenation of Character arrays using strcat(s1,s2)
    char s1[20] = "Hello ";
    char s2[20] = "Kaun?";

    strcat(s1, s2);
    cout << s1 << endl;

    // "push_back()" is used to insert charcter at the end of the string
    string s = "HELL";
    char ch = 'O'; // charcter is always put withing '' and not " "
    s.push_back(ch);
    cout << s << endl;

    // size(), length(), and strlen(s1) is used to find length of the string and character array respectively
    cout << s.size() << endl;
    cout << s.length() << endl;
    cout << strlen(s1) << endl; // used for size of character array

    // to_string() : it is used to convert numeric value to string
    int num = 432;
    string strr = to_string(num);
    strr += "1";
    cout << strr << endl;
    cout << strr[1] << endl;

    return 0;
}