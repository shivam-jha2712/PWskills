#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool validBracketSequence(string s)
{
    stack<char> temp;

    for (int i = 0; i < s.length(); i++)
    {
        char curr = s[i]; // current character
        if (curr == '(' || curr == '[' || curr == '{')
        {
            temp.push(curr); // if current is any opening bracket then push in temp stack;
        }
        else
        {
            // closing bracket would be appearing
            // Also we are checking temp is not empty to make sure there must be a waiting opening bracket to continue the process
            if (curr == '}' and !temp.empty() and temp.top() == '{')
            {
                temp.pop(); // popping the temp top if it is current character is a corresponding closing bracket;
            }
            else if (curr == ')' and !temp.empty() and temp.top() == '(')
            {
                temp.pop(); // popping the temp top if it is current character is a corresponding closing bracket;
            }
            else if (curr == ']' and !temp.empty() and temp.top() == '[')
            {
                temp.pop(); // popping the temp top if it is current character is a corresponding closing bracket;
            }
            else
            {
                return false; // this is when any of the above conditions are false
                // Eg: ((] 
            }
        }
    }
    return temp.empty(); // when the complete string is empty and all are balanced that implies we will return true.
}

int main()
{

    string str;
    cin >> str;

    cout << validBracketSequence(str) << endl;
    return 0;
}