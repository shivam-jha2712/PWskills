#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << v[n - 1] << endl;

    return 0;
}

/*

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


    return 0;
}

*/