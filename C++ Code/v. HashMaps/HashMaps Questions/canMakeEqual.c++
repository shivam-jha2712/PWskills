#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool canMakeEqual(vector<string> &v)
{
    int n = v.size(); // number of elements in vector

    unordered_map<char, int> m; // Create a map for storing all the freq of each charcter of each strings in the vector.

    for (string str : v) // for each string in vector v
    {
        for (char c : str) // And for each character of string in vector v
        {
            m[c]++; // increment the count for each key and add it in the map
        }
    }

    for (auto ele : m) // and for each element frequency in the map
    {
        if (ele.second % n != 0) // if its frequency is not multiple of n, then
        {
            return false; // itw can't be interchanged to make equal
        }
    }
    return true; // if not it can be made equal by interchanging
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // Here the intutions comes out to be that if the frequency of charcters of every element in the vector is a multiple of size of the vector then it can be made equal by making the necessary changes or else it can't be done
    if (canMakeEqual(v))
    {
        cout << "Yes can be made Equal " << endl;
    }
    else
    {
        cout << "No can't be made Equal " << endl;
    }

    return 0;
}