#include <iostream>
#include <unordered_map>
using namespace std;

bool isStrobogrammatic(string num)
{
    unordered_map<char, char> strobMap = {
        {'0', '0'},
        {'1', '1'},
        {'6', '9'},
        {'8', '8'},
        {'9', '6'}};

    int left = 0, right = num.size() - 1;
    while (left <= right)
    {
        if (strobMap[num[left]] != num[right])
            return false;

        left++;
        right--;
    }

    return true;
}

int main()
{
    string num = "69";

    bool isStrob = isStrobogrammatic(num);

    // Print the result
    cout << (isStrob ? "true" : "false") << endl;

    return 0;
}
