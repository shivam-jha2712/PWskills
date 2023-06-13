#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Common question regarding operator overloading is how to add two complex numbers using the overloaded "+" operator.

class Complex
{
public:
    int real; // Represents the real part of the complex number
    int img;  // Represents the imaginary part of the complex number

    // Constructor to initialize the complex number with given real and imaginary parts
    Complex(int x, int y)
    {
        real = x;
        img = y;
    }

    // Overloaded "+" operator to add two complex numbers
    Complex operator+(Complex &c)
    {
        Complex ans(0, 0); // Create a new Complex object to store the result
        // The first "real" here is that of c1 and "c.real" give real part of c2
        ans.real = real + c.real; // Add the real parts of the complex numbers
        // The first "img" here is that of c1 and "c.img" give img. part of c2
        ans.img = img + c.img; // Add the imaginary parts of the complex numbers
        return ans;            // Return the result
    }
};

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Complex c1(7, 2); // Create the first complex number with real part 7 and imaginary part 2
    Complex c2(1, 3); // Create the second complex number with real part 1 and imaginary part 3

    Complex c3 = c1 + c2; // Add the two complex numbers using the overloaded "+" operator

    cout << c3.real << " + " << c3.img << "i" << endl; // Print the result of addition

    return 0;
}

/*
In the above code:

The Complex class represents a complex number with a real and imaginary part.
The constructor is used to initialize the complex number with the given real and imaginary parts.
The operator+ function is overloaded to add two complex numbers using the "+" operator. It creates a new Complex object and performs addition of the real and imaginary parts.
In the main function, two complex numbers c1 and c2 are created and then added using the overloaded "+" operator, storing the result in c3.
Finally, the result of the addition, c3, is printed as real + imgi format.
This code demonstrates how to perform addition of complex numbers using operator overloading.
*/