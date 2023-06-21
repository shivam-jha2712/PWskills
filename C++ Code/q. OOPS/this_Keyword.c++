/*
In object-oriented programming (OOP) in C++, the this keyword is a pointer that refers to the current object instance. It is a special pointer that holds the memory address of the object on which a member function is invoked.

The this pointer allows you to access the member variables and member functions of the current object within its member functions. It is mainly used to differentiate between the member variables of a class and the local variables or function parameters with the same name.
*/

#include <iostream>

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int length, int width)
    {
        this->length = length; // Using 'this' to access the member variable
        this->width = width;
    }

    int calculateArea()
    {
        return this->length * this->width; // Using 'this' to access the member variable
    }

    void setDimensions(int length, int width)
    {
        this->length = length; // Using 'this' to access the member variable
        this->width = width;
    }
};

int main()
{
    Rectangle *rectangle = new Rectangle(5, 3);
    std::cout << "Area: " << rectangle->calculateArea() << std::endl;

    rectangle->setDimensions(8, 4);
    std::cout << "Area after setting dimensions: " << rectangle->calculateArea() << std::endl;

    delete rectangle; // Deallocate the dynamically allocated object

    return 0;
}
