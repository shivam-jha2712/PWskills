#include <bits/stdc++.h> // HEADER FILE
#include <set>

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    set<int> set1;
    set<int, greater<int>> set2; // using comparator function thus in reverse order

    set1.insert(1);
    set1.insert(2);
    set1.insert(6);
    set1.insert(3);
    set1.insert(4);
    set1.insert(5);
    set1.insert(7);

    set2.insert(1);
    set2.insert(2);
    set2.insert(6);
    set2.insert(3);

    cout << set1.size() << endl;
    set1.insert(7);
    cout << set1.size() << endl;

    // Traversal and Printing of elements in a set.
    auto it = set1.begin();
    while (it != set1.end())
    {
        cout << *it << " ";
        ++it; // Increment the iterator
    }
    cout << endl;

    // Doing the same using for-each loop
    for (auto itr : set2)
    {
        cout << itr << " ";
    }
    cout << endl;

    // Deletion of Elements in a Set
    // Method 1: using value - set1.erase(value);
    set1.erase(7);
    cout << "Erasing from value: " << endl;
    for (auto value : set1)
    {
        cout << value << " ";
    }
    cout << endl;

    // Method 2: Removal using the iterator position
    //  auto itr = set1.begin();
    advance(it, 5); // 6 will be removed
    set1.erase(it);
    cout << "Erasing from position by itr : " << endl;
    for (auto value : set1)
    {
        cout << value << " ";
    }
    cout << endl;

    // Method 3: Removal of elements withing the range
    auto start_itr = set1.begin();
    start_itr++; // Moved to 2

    auto end_itr = set1.begin();
    advance(end_itr, 3); // Moved to 4

    set1.erase(start_itr, end_itr); // numbers from 2 to 3 are removed as end is at 4 thus it is not removed

    cout << "Erasing of Range: " << endl;
    for (auto value : set1)
    {
        cout << value << " ";
    }
    cout << endl;

    // Search Operation
    if (set1.find(4) != set1.end())
    {
        cout << "Value is Presnt" << endl;
    }
    else
    {
        cout << "Value is Not Presnt" << endl;
    }

    // cout << "Upper Bound of 4 is:" << set1.upper_bound(4) << endl;
    // cout << "Upper Bound of 4 is:" << set1.upper_bound(4) << endl;

    return 0;
}