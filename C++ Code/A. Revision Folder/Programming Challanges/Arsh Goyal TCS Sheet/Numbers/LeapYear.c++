#include <iostream>
using namespace std;

string checkLeapYear(int n) // Function returns a string instead of void
{
    if ((n % 400 == 0) || (n % 100 != 0) && (n % 4 == 0))
    {
        return "Leap Year";
    }
    else
    {
        return "Not a Leap Year";
    }
}

int main()
{

    int n;

    cout << "Enter the year: ";
    cin >> n;

    cout << checkLeapYear(n); // Printing the result directly using cout

    return 0;
}
