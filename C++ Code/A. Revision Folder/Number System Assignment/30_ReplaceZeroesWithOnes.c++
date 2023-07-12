#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    string data = to_string(n); // convert to string

    for (int i = 0; i < data.length(); i++) // replace 0's with 1s
    {
        if (data[i] == '0')
        {
            data[i] = '1';
        }
    }
    int ans = stoi(data); // return the datatype back to number

    cout << ans << endl; // print the number

    return 0;
}