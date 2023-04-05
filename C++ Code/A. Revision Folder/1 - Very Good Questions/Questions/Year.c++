// If the start year is given and the digits which shall not be present in any year following year is given then find the year which will have none of the digits mentioned in it program in c++

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool has_digit(int year, vector<int> &digits)
{
    while (year != 0)
    {
        int remainder = year % 10;
        if (find(digits.begin(), digits.end(), remainder) != digits.end())
        {
            return true;
        }
        year = year / 10;
    }
    return false;
}

int main()
{
    int start_year;
    vector<int> digits;

    cout << "Enter the start year: ";
    cin >> start_year;

    cout << "Enter the digits to exclude (separated by spaces): ";
    int digit;
    while (cin >> digit)
    {
        digits.push_back(digit);
    }

    int year = start_year;
    while (has_digit(year, digits))
    {
        year++;
    }

    cout << "The first year with none of the digits mentioned is: " << year << endl;

    return 0;
}
