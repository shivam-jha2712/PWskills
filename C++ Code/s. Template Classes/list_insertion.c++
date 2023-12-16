#include <iostream>
#include <list>

int main()
{
    std::list<int> l1 = {1, 2, 3, 4, 5};

    // Inserting elements
    auto it = l1.begin();
    std::advance(it, 2);
    l1.insert(it, 6);

    // Print after insertion
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    // Inserting count times
    it = l1.begin();
    std::advance(it, 3);
    l1.insert(it, 5, 7);

    // Print after insertion
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    // Inserting from start_itr till end_itr
    it = l1.begin();
    std::advance(it, 2);
    auto str_itr = l1.begin();
    auto end_itr = l1.begin();
    std::advance(end_itr, 2);
    l1.insert(it, str_itr, end_itr);

    // Print after insertion
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    return 0;
}

// NOTE - Since iterator is similar to pointer concept thus the value corresponding to that iterator is given by the help of (*) star operator
