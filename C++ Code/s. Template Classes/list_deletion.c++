#include <iostream>
#include <list>

int main()
{
    std::list<int> l1 = {1, 2, 3, 4, 5};

    // Deleting element at a specific position
    auto itr = l1.begin();
    std::advance(itr, 2);
    l1.erase(itr);

    // Print after deletion
    for (auto num : l1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Deleting a range of elements
    auto str_itr = l1.begin();
    auto end_itr = l1.begin();
    std::advance(str_itr, 1);
    std::advance(end_itr, 3);
    l1.erase(str_itr, end_itr);

    // Print after deletion
    for (auto num : l1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// NOTE - Since iterator is similar to pointer concept thus the value corresponding to that iterator is given by the help of (*) star operator
