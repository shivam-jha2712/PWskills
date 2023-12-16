#include <bits/stdc++.h>
using namespace std;

// Here we are passing the vector by refrence as it enables us to not to create a copy of a vector
// And also since all the chnages are to be done on the same vector thus we are doing &v
// Also it is considered to be a good practice to pass the vector by refrence in general.
void sortZeroesAndOnes(vector<int> &v)
{
    int zeroes_count = 0;

    for (int j : v)
    {
        if (j == 0)
        {
            zeroes_count++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i < zeroes_count)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    sortZeroesAndOnes(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}