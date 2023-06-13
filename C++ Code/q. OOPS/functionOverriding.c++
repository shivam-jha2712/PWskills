#include <bits/stdc++.h> // HEADER FILE

using namespace std;
// Runtime Polymorphism is achieved
class Parent
{
public:
    // The virtual keyword is used to create function overriding and determine which function will be called at runtime.
    virtual void print()
    {
        cout << "parent class" << endl;
    }

    void show()
    {
        cout << "parent class" << endl;
    }
};

class Child : public Parent
{
public:
    void print()
    {
        cout << "child class" << endl;
    }

    void show()
    {
        cout << "child class" << endl;
    }
};

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Parent &p; // Declare a reference to a Parent object
    Child c;   // Create an instance of the Child class

    p = &c; // Assign the Child object to the Parent reference

    p->print(); // Call the print() function using the Parent reference
    p->show();  // Call the show() function using the Parent reference

    return 0;
}

/*
In the above code:

The Parent class has a virtual function print() and a non-virtual function show().
The virtual keyword is used with the print() function to enable function overriding. It allows the child class to override the function implementation.
The Child class inherits from the Parent class and overrides the print() function.
In the main() function, a reference p of type Parent is declared, and an instance of the Child class c is created.
The p reference is assigned to the Child object c, allowing polymorphic behavior.
The print() and show() functions are called using the p reference. Since print() is a virtual function, the function of the actual object type (Child) is called at runtime, resulting in "child class" being printed. However, show() is not a virtual function, so the function of the reference type (Parent) is called, resulting in "parent class" being printed.
This code demonstrates function overriding using the virtual keyword and polymorphism through the use of a base class reference to a derived class object.
*/