#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int Productsmallpair(int sum, vector<int> v)
{
    int n = v.size();
    if (n < 2)
    {
        return -1;
    }
    sort(v.begin(), v.end());
    int num1 = v[0];
    int num2 = v[1];

    if ((num1 + num2) < sum)
    {
        return (num1 * num2);
    }
    else
    {
        return 0;
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int sum;
    cin >> sum;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << Productsmallpair(sum, v)
    << endl;

    return 0;
}