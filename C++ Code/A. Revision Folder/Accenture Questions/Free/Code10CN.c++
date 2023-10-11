/*
10. Execute the function for the given purpose.
Create a matrix and mention the elements in it. Now, divide the main matrix into two halves in such a way that the elements in index 0 are even, the elements in index 1 are odd, and so on.

Then arrange the values in ascending order for even and odd. After this, calculate the sum of the second largest numbers from both even and odd matrices.

Example
The size of the array is 5.
Element at 0 index: 3
Element at 1 index: 4
Element at 2 index: 1
Element at 3 index: 7
Element at 4 index: 9

Even array: 1,3,9
Odd array: 4,7

*/

#include <bits/stdc++.h> // HEADER FILE

using namespace std;

vector<int> evenArray(vector<int> v)
{
    int n = v.size();
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            result.push_back(v[i]);
        }
    }
    return result;
}
vector<int> oddArray(vector<int> v)
{
    int n = v.size();
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            result.push_back(v[i]);
        }
    }
    return result;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> even = evenArray(v);
    vector<int> odd = oddArray(v);

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int odd_size = odd.size();
    int even_size = even.size();

    if (odd_size < 2 || even_size < 2)
    {
        cout << "Error";
    }
    else
    {
        cout << even[even_size - 2] + odd[odd_size - 2] << endl;
    }

    return 0;
}