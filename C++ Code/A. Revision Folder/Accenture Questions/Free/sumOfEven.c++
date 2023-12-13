#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string input;
    getline(cin, input);

    stringstream ss(input);
    vector<int> v;
    int num;

    while (ss >> num)
    {
        v.push_back(num);
    }

    int size = v.size();
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (v[i] % 2 == 0)
        {
            sum += v[i];
        }
    }

    cout << "sum: " << sum << endl;

    return 0;
}