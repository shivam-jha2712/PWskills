#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // string str;
    // cout << "Enter String with spaces: (cin >> is used)" << endl;
    // cin >> str;
    // cout << str << endl;

    // Since the (>>) extraction operator only takes input unless it does not find a space, a tabspace or a newline. Thus if your enter input to be "Shivam Jha" the output so formed will be "Shivam"

    // Thus to overcome it we would be using (getline(cin, str))
    string str1;
    // cout << "Enter String with spaces: (getline(cin, str) is used)" << endl;
    getline(cin, str1);
    cout << str1 << endl;
    return 0;
}