#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int largest = v[0];
    int secondLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != largest)
        {
            secondLargest = v[i];
            break;
        }
    }

    cout << "Second Largest is : " << secondLargest << endl;
    return 0;
}