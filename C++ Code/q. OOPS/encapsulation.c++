#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class ABC
{
    int x; // Private member variable

public:
    void set(int n) // Public member function to set the value of x
    {
        x = n;
    }

    int get() // Public member function to get the value of x
    {
        return x;
    }
};

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    ABC obj1;                   // Create an object of class ABC
    obj1.set(3);                // Set the value of x using the set() method
    cout << obj1.get() << endl; // Get the value of x using the get() method and print it

    return 0;
}
