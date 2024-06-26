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

    int target;
    cin >> target;

    int countTargetPairs = 0;
    bool existDiff = false;
    bool existSum = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == target)
            {
                countTargetPairs++;
                existSum = true;
            }
            if (abs(v[i] - v[j]) == target)
            {
                existDiff = true;
            }
        }
    }

    /*
    If pair with sum exists or not
    */
        if(existSum){
            cout << "Yes sum exists" << endl;
        }
        else{
            cout << "No sum exists" << endl;
        }
    /*
    If pair with abs diffrennce exists or not
    */

        if(existDiff){
            cout << "Yes diffrence exists" << endl;
        }
        else{
            cout << "No diffrence exists" << endl;
        }

    /*
        Count Number of pairs
    */
    // cout << "The Number of pairs sum to target : " << countTargetPairs << endl;

    return 0;
}