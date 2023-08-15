
#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements of Array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    cout << "Sum : " << sum << endl;

        return 0;
}