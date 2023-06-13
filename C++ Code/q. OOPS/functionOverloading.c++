#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Sum
{
public:
    // Overloaded function: add(int, int)
    void add(int x, int y)
    {
        int sum = x + y;
        cout << sum << endl; // Print the sum of two integers
    }

    // Overloaded function: add(int, int, int)
    void add(int x, int y, int z)
    {
        int sum = x + y + z;
        cout << sum << endl; // Print the sum of three integers
    }

    // Overloaded function: add(double, double)
    void add(double x, double y)
    {
        double sum = x + y;
        cout << sum << endl; // Print the sum of two doubles
    }
};

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Sum s;
    s.add(2, 3);     // Call the add(int, int) function
    s.add(2, 3, 4);  // Call the add(int, int, int) function
    s.add(2.84, 3.3); // Call the add(double, double) function

    return 0;
}
