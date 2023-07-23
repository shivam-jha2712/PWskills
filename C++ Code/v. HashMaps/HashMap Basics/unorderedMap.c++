#include <bits/stdc++.h> // HEADER FILE
#include <unordered_map>

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    unordered_map<int, string> record;
    // roll no, name

    record.insert(make_pair(1, "Aditya"));
    record.insert(make_pair(2, "Deepak"));
    record.insert(make_pair(3, "Nandini"));
    record.insert(make_pair(4, "Pragati"));
    record.insert(make_pair(5, "Gracy"));
    record.insert(make_pair(6, "Varun"));
    record[7] = "Shivam";
    record[8] = "Vaibhav";
    record[9] = "Tanya";

    // record[1] = "Sonali";  // if I use this then the name corresponding to key = 1 will be ovewritten

    // record.insert(make_pair(1, "Sonali")); // But in this case nothing will happen and it will remain the same.

    for (auto pair : record)
    {
        cout << "Roll No: " << pair.first << endl;
        cout << "Name :" << pair.second << endl;
        cout << endl;
    }

    return 0;
}