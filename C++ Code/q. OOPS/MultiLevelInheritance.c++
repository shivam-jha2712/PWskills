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

class Child : public Parent // Single inheritance: Child class inherits from Parent class
{
public:
    Child()
    {
        cout << "Child Class" << endl; // Display message when Child class is called
    }
};

class GrandChild : public Child // Multilevel inheritance: GrandChild class inherits from Child class
{
public:
    GrandChild()
    {
        cout << "GrandChild Class" << endl; // Display message when GrandChild class is called
    }
};

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    GrandChild g; // Create an object of GrandChild class

    return 0;
}
