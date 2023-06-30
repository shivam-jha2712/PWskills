#include <bits/stdc++.h> // HEADER FILE
#include <unordered_set>
using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    unordered_set<int> set;

    set.insert(1);
    set.insert(3);
    set.insert(2);
    set.insert(1);

    // Since unordered set thus the values will print in some random order
    for (auto value : set)
    {
        cout << value << " ";
    }

    return 0;
}