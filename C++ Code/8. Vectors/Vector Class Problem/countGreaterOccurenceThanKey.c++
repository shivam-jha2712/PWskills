#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Input the Size of the vector.
    vector<int> v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    // Assigning the key to be found.
    cout << "Enter Key :" << endl;
    int Key;
    cin >> Key;

    // Counting the keys in the vector
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > Key)
        {
            count++;
        }
    }

    cout << "Elements Greater than Key Element Are: " << count << endl;
    return 0;
}