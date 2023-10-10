#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int sumOfElements(vector<int> v)
{
    int n = v.size();

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    return sum;
}

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter the vector elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << sumOfElements(v);
    return 0;
}