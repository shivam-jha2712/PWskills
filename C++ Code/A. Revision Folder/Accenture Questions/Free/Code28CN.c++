#include <iostream>
#include <cmath>

// Function to find the roots of a quadratic equation ax^2 + bx + c = 0
void findQuadraticRoots(double a, double b, double c)
{
    // Calculate the discriminant (b^2 - 4ac)
    double discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive, negative, or zero
    if (discriminant > 0)
    {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Root 1 = " << root1 << " and Root 2 = " << root2 << std::endl;
    }
    else if (discriminant == 0)
    {
        // One real root (repeated)
        double root = -b / (2 * a);
        std::cout << "Root 1 = Root 2 = " << root << std::endl;
    }
    else
    {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i";
        std::cout << " and Root 2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
}

int main()
{
    double a, b, c;
    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

    findQuadraticRoots(a, b, c);

    return 0;
}
