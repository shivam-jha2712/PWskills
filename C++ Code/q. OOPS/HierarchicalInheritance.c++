#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent Class" << endl; // Display message when Parent class is called
    }
};

class Child1 : public Parent // Hierarchical inheritance: Child1 class inherits from Parent class
{
public:
    Child1()
    {
        cout << "Child1 Class" << endl; // Display message when Child1 class is called
    }
};

class Child2 : public Parent // Hierarchical inheritance: Child2 class inherits from Parent class
{
public:
    Child2()
    {
        cout << "Child2 Class" << endl; // Display message when Child2 class is called
    }
};

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Child1 c1; // Create an object of Child1 class
    Child2 c2; // Create an object of Child2 class

    return 0;
}
