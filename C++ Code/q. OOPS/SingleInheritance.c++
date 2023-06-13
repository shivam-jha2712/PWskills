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

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Child c; // Create an object of Child class

    return 0;
}
/*
Explanation:

- Inheritance is a feature in object-oriented programming where a class can inherit properties (member variables and member functions) from another class.

- In this code, we have an example of single inheritance.

- The Parent class is defined with a default constructor. When the Parent class is called, it prints the message "Parent Class" using cout.

-The Child class is defined and it publicly inherits from the Parent class using the public access specifier. This means that the public members of the Parent class are accessible in the Child class.

- The Child class also has a default constructor. When the Child class is called, it prints the message "Child Class" using cout.

- In the main() function, an object c of the Child class is created. When the object c is created, the constructor of the Child class is called. Since the Child class inherits from the Parent class, the constructor of the Parent class is also called before the constructor of the Child class. This results in the following output:

Parent Class
Child Class

- The output displays the messages "Parent Class" and "Child Class" in the respective order, indicating that the constructors of both classes are invoked during object creation.

-Single inheritance allows a derived class to inherit the properties of a single base class. In this case, the Child class inherits from the Parent class, which means that the Child class can access the public members of the Parent class.


*/