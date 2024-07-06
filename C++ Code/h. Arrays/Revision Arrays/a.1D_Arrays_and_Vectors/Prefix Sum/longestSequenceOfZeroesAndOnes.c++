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
    int sequence = 0;
    int maxSequence = 0;

    for (int i : v)
    {
        if (i == 0)
        {
            sequence++;
        }
        else if (i == 1)
        {
            sequence--;
        }

        maxSequence = max(sequence, maxSequence);
    }

    cout << maxSequence << endl;
    return 0;
}