#include <bits/stdc++.h> // HEADER FILE
#include <unordered_set>
#include <set>
using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    multiset<int> set;

    set.insert(1);
    set.insert(3);
    set.insert(2);
    set.insert(1);

    // Since multiset thus the repated values will print as well
    // But would maintain the ordering
    for (auto value : set)
    {
        cout << value << " ";
    }

    return 0;
}