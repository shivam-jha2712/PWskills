#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Friend Function

class A
{
    int x;

public:
    A(int y)
    {
        x = y;
    }

    friend void print(A &obj); // Declare print() function as a friend of class A
};

// Friend function: print()
// This function can access the private members of class A as it is declared as a friend function.
void print(A &obj)
{
    cout << obj.x << endl; // Access the private member x of class A
}

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    A obj(5); // Create an object of class A with x value as 5

    // cout << obj.x << endl; // Cannot directly access the private member x as it is not accessible outside the class

    print(obj); // Call the friend function print(), which can access the private member x of class A

    return 0;
}

/*
In the above code:

The class A has a private member x.
The function print() is declared as a friend function inside the A class using the friend keyword.
The print() function takes an object of class A as a parameter by reference (A&).
The friend function print() is defined outside the class and has access to the private members of class A.
Inside the print() function, the private member x of the object obj is accessed and printed.
In the main() function, an object obj of class A is created with an x value of 5.
The private member x cannot be accessed directly outside the class. However, the print() function, being a friend of class A, is able to access and print the value of x.
Friend functions are useful when you want to allow external functions to access the private members of a class. They provide access to the private members without making those functions members of the class itself. In this example, the print() function is declared as a friend of class A, which allows it to access the private member x and print its value.
*/