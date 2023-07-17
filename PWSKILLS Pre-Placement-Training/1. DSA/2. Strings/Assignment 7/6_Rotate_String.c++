#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal)
{
    if (s.size() != goal.size())
        return false;

    string doubledS = s + s;

    return doubledS.find(goal) != string::npos;
}

int main()
{
    string s = "abcde";
    string goal = "cdeab";

    bool canRotate = rotateString(s, goal);

    // Print the result
    cout << (canRotate ? "true" : "false") << endl;

    return 0;
}
