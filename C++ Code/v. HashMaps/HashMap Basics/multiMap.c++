#include <bits/stdc++.h> // HEADER FILE
#include <map>
using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    multimap<string, int> directory;

    directory.insert(make_pair("Shivam", 12345));
    directory.insert(make_pair("Ashish", 57891));
    directory.insert(make_pair("Shivam", 57892));
    directory.insert(make_pair("Aditya", 57893));
    directory.insert(make_pair("Varun", 57894));
    directory.insert(make_pair("Vaibhav", 57897));

    // directory.erase("Shivam"); 

    // In this  insertion via [] is not allowed

    for (auto ele : directory)
    {
        cout << "Emp_name: " << ele.first << endl;
        cout << "Emp_id: " << ele.second << endl;
        cout << endl;
    }

    cout << "No of times Shivam Occured : " << directory.count("Shivam") << endl;

    return 0;
}