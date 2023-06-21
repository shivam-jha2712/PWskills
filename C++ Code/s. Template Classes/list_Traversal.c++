#include <iostream>
#include <list>

int main()
{
    std::list<int> l1 = {1, 2, 3, 4, 5};

    // Traversal of list using range-based loops
    for (auto num : l1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Traversal of list using iterators
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    // Reverse Traversal of list using iterators
    for (auto itr = l1.rbegin(); itr != l1.rend(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    return 0;
}

// NOTE - Since iterator is similar to pointer concept thus the value corresponding to that iterator is given by the help of (*) star operator
