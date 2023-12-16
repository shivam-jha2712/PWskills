#include <iostream>
#include <list>

int main()
{
    std::list<int> l1 = {1, 2, 3, 4, 5};

    auto itr = l1.begin();
    std::cout << *itr << std::endl;

    auto rev_itr = l1.rbegin();
    std::cout << *rev_itr << std::endl;

    std::advance(itr, 2);
    std::cout << *itr << std::endl;

    return 0;
}

// NOTE - Since iterator is similar to pointer concept thus the value corresponding to that iterator is given by the help of (*) star operator
