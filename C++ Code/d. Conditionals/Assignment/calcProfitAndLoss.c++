#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int CP, SP;
    cout << "Enter Cost Price: " << endl;
    cin >> CP;
    cout << "Enter Selling Price: " << endl;
    cin >> SP;
    if (SP - CP > 0)
    {
        cout << "Profit : " << SP - CP << endl;
    }
    else
    {
        cout << "Loss : " << CP - SP << endl;
    }
    return 0;
}