#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINITION
{

    int n;
    cout << "Enter the Size of the vector: " << endl;
    cin >> n;

    vector<int> v(n);

    cout << "Enter the vector elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Max Element : " << *max_element(v.begin(), v.end()) << endl; // Corrected line
    cout << "Min Element : " << *min_element(v.begin(), v.end()) << endl; // Corrected line

    return 0;
}
