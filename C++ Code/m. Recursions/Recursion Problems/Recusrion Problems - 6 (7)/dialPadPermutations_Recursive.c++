#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void f(string &str, int i, string result, vector<string> &li, vector<string> &v)
{
    // Base Case: if the iteration moves to the end of the string we push back the result string in the li vector.
    if (i == str.size())
    {
        li.push_back(result);
        return;
    }
    // Here we are getting the string digit that we need to operate on.
    int digit = str[i] - '0';
    // As per the map create if the digits are less or equal to zero then we would return the function as it is.
    if (digit <= 0)
    {
        f(str, i + 1, result, li, v);
        return;
    }
    // And if the digit is greater that zero then we return the function for the size of digts
    for (int j = 0; j < v[digit].size(); j++)
    {
        f(str, i + 1, result + v[digit][j], li, v);
    }
    return;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Vector map for the number to there corresponding dial pad strings
    vector<string> v(10);
    v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    // Fetching the respective string that needs to be operated on
    string str = "23";

    // Getting the answer string li.
    vector<string> li;
    // We have called a function that is responsible for getting all the strings that will be available for the combination by the string str.
    f(str, 0, "", li, v);

    for (int i = 0; i < li.size(); i++)
    {
        cout << li[i] << " ";
    }

    return 0;
}