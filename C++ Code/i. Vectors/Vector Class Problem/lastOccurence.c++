#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    vector<int> v(6); // Vector declartion
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i]; // Input the vector using a for loop.
    }

    cout << "Enter Key: " << endl; // Key whose occurence is to be checked
    int Key;
    cin >> Key;

    int occurence = -1; // If no occurence then print -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == Key)
        {
            occurence = i; // found and is printing the position of the occurrence.
        }
    }
    cout << "Last Occurence: " << occurence << endl;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == Key)
        {
            occurence = i;
            break; // found and is printing the position of the occurrence.
        }
    }
    cout << "First Occurence: " << occurence << endl;

    return 0;
}