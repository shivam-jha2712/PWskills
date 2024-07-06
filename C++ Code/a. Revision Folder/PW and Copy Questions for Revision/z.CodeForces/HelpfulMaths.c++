#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINITION
{
    string str;
    cin >> str;

    vector<int> numbers;

    // Extract numbers from the string
    for (char c : str)
    {
        if (isdigit(c))
        {
            numbers.push_back(c - '0'); // Convert char to int and store in vector
        }
    }

    // Sort the numbers
    sort(numbers.begin(), numbers.end());

    // Form the result string
    string result;
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        result += to_string(numbers[i]);
        if (i < numbers.size() - 1)
        {
            result += "+";
        }
    }

    // Output the result
    cout << result << endl;

    return 0;
}

// Much easier way to do the same is to count the ones, twoes and threes and then just print them sepreated by "+" sign