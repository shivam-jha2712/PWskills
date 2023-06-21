#include <bits/stdc++.h> // Include all standard library headers
// #include <list>      // Header file for implementing doubly linked list using STL

using namespace std;

int main() // Main function definition
{
    ios_base::sync_with_stdio(false); // For fast input/output
    cin.tie(0);
    cout.tie(0);

    list<int> l1 = {1, 2, 3, 4, 5}; // Create a doubly linked list l1 with initial values 1, 2, 3, 4, 5
    auto itr = l1.begin();          // Iterator pointing to the first element of the list
    // l1.end() - iterator pointing to the memory location after the last element (5)
    cout << *itr << endl; // Print the value at the iterator position (should be 1)

    auto rev_itr = l1.rbegin(); // Reverse iterator pointing to the last element of the list
    cout << *rev_itr << endl;   // Print the value at the reverse iterator position (should be 5)
    // l1.rend() - iterator pointing to the memory location after the first element (1)

    advance(itr, 2);      // Move the iterator forward by 2 positions
    cout << *itr << endl; // Print the value at the updated iterator position (should be 3)

    // Traversal of list using range-based loops
    for (auto num : l1)
    {
        cout << num << " "; // Print the value at the iterator position
    }
    cout << endl;

    // Traversal of list using iterators
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // Reverse Traversal of list using iterators
    for (auto itr = l1.rbegin(); itr != l1.rend(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // // Inserting elements
    // auto it = l1.begin();
    // advance(it, 2);
    // l1.insert(it, 6);

    // // Print after insertion
    // for (auto itr = l1.begin(); itr != l1.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }
    // cout << endl;

    // // Inserting count times
    // auto it = l1.begin();
    // advance(it, 3);
    // l1.insert(it, 5, 7);

    // // Print after insertion
    // for (auto itr = l1.begin(); itr != l1.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }
    // cout << endl;

    // Inserting from start_itr till end_itr
    auto it = l1.begin();
    advance(it, 2);
    auto str_itr = l1.begin();
    auto end_itr = l1.begin();
    advance(end_itr, 2);
    l1.insert(it, str_itr, end_itr);

    // Print after insertion
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}

// NOTE - Since iterator is similar to pointer concept thus the value corresponding to that iterator is given by the help of (*) star operator
