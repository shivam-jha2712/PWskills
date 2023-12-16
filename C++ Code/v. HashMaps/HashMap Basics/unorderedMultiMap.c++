#include <bits/stdc++.h> // HEADER FILE
#include <unordered_map>

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    unordered_multimap<int, string> record;
    // roll no, name
    // Since it is a multimap thus elements with duplicate keys are allowed
    record.insert(make_pair(1, "Aditya"));
    record.insert(make_pair(2, "Deepak"));
    record.insert(make_pair(3, "Nandini"));
    record.insert(make_pair(4, "Pragati"));
    record.insert(make_pair(5, "Gracy"));
    record.insert(make_pair(6, "Varun"));
    record.insert(make_pair(6, "Vashist"));
    record.insert(make_pair(1, "Shivam"));

    // In the multimap be it unordered or ordered you can not use [] for insertion


    for (auto pair : record)
    {
        cout << "Roll No: " << pair.first << endl;
        cout << "Name :" << pair.second << endl;
        cout << endl;
    }

    return 0;
}