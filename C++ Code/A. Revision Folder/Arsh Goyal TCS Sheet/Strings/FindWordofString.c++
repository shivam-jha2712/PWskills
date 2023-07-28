
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string input = "Hello how are you today?";
    vector<string> words;
    istringstream ss(input);
    string word;

    while (ss >> word)
    {
        words.push_back(word);
    }

    for (const string &w : words)
    {
        cout << w << endl;
    }

    return 0;
}

// #include <iostream>
// #include <sstream>
// #include <vector>
// using namespace std;

// int main()
// {
//     // string input = "Hello,how,are,you,today?";
//     // char separator = ',';
//     string input;
//     cout << "Enter the String: ";
//     getline(cin, input);

//     char separator;
//     cout << "Enter the separator: ";
//     cin >> separator;

//     vector<string> words;
//     istringstream iss(input);
//     string word;

//     while (getline(iss, word, separator))
//     {
//         words.push_back(word);
//     }

//     for (const string &w : words)
//     {
//         cout << w << endl;
//     }

//     return 0;
// }
