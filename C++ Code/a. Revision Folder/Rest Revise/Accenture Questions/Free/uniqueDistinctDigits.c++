#include <iostream>
#include <algorithm>

using namespace std;

int findNextDistinctNumber(int number)
{
    for (int i = number + 1; i < 9000; ++i)
    {
        string numStr = to_string(i);
        if (all_of(numStr.begin(), numStr.end(), [&](char digit)
                   { return count(numStr.begin(), numStr.end(), digit) == 1; }))
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int friendNumber;

    cout << "Enter your friend's number greater than 1000: ";
    cin >> friendNumber;

    if (friendNumber <= 1000 || friendNumber >= 9000)
    {
        cerr << "Invalid input. Please provide a number greater than 1000 and less than 9000." << endl;
        return 1;
    }

    int result = findNextDistinctNumber(friendNumber);

    cout << "The smallest integer greater than your friend's number with distinct digits is: " << result << endl;

    return 0;
}
