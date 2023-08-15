#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements of the array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "even: " << even << " odd: " << odd << endl;

    return 0;
}