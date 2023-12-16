#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    vector<int> E(n);
    vector<int> L(n);
    vector<int> T(n); // Extra space for getting the net numbers of guests

    for (int i = 0; i < n; i++)
    {
        cin >> E[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> L[i];
    }

    T[0] = E[0] - L[0]; // Giving in the no of guests for the first hour

    for (int i = 0; i < n; i++)
    {
        T[i + 1] = T[i] + E[i + 1] - L[i + 1]; // And for next coming hours it would be sum of first hour +  entered - leaving guests;
    }

    sort(T.begin(), T.end()); // Sorting to find the maximum

    cout << T[n - 1]; // Printing the maximum;
    return 0;
}