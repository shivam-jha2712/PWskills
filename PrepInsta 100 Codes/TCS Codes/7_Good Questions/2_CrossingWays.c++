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


    int cross_Count = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(v[i] == 0)
        {
            for(int j = i+1; j < n; j++)
            {
                if(v[j] == 1)
                {
                    cross_Count++;
                }
            }
        }
    }

    cout << cross_Count << endl;
    return 0;
}