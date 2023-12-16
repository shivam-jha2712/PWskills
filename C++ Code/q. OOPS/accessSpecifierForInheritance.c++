#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Parent
{

public:
    int x; // Public member variable

protected:
    int y; // Protected member variable

private:
    int z; // Private member variable
};

class Child1 : public Parent
{
    // x will remain public
    // y will remain protected
    // z will not be accessible
};

class Child2 : private Parent
{
    // x will be private
    // y will be private
    // z will be inaccessible
};

class Child3 : protected Parent
{
    // x will be protected
    // y will be protected
    // z will be inaccessible
};

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Parent baccha; // Create an object of the Parent class

    baccha.x = 0;             // Accessing the public member variable x
    cout << baccha.x << endl; // Printing the value of x

    return 0;
}
