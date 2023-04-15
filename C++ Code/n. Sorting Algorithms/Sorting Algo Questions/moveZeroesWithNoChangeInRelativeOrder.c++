#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void is_sorted(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (v[j] == 0 && v[j + 1] != 0)
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    return;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    is_sorted(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

/*
Pure Buble Sort only change is here we are checking for 0s and then we are swapping
*/ 


/*
3 0 2 0 1 5
3 2 0 0 1 5
3 2 0 1 0 5
3 2 0 1 5 0


3 2 0 1 5 0
3 2 1 0 5 0 
3 2 1 5 0 0 
*/ 