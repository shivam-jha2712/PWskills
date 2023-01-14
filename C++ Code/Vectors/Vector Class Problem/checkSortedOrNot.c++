#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Input the Array;.
    int v[] = {1, 2, 3, 4, 5, 6};

    // Checking Sorting of elements in the vector
    bool sort_flag = false;
    for (int i = 1; i < 6; i++)
    {
        if (v[i] <= v[i + 1])
        {
            sort_flag = true;
        }
    }

    cout << "Is Sorted (Ascending)? " << sort_flag << endl;
    return 0;
}