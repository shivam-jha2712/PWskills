#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
     cout << "Enter Array Size: " << endl;
     cin >> n;

    cout << "Enter Array Elements: " << endl;
    vector <int> v;

    for(int i =0; i<n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }


    int targetSum;
    cout << "Enter Target Sum of the element: " << endl;
    cin >> targetSum;

    int countTarget =0;
    int i = 0;
    int j = v.size() -1;
    while(i<j)
    {
        if(v[i] + v[j] == targetSum)
        {
            countTarget++;
            i++;
            j--;
        }
        else if(v[i] +v[j] > targetSum)
        {
            j--;
        }
        else{
            i++;
        }

    }
cout << countTarget << endl;
    return 0;
}