#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int printEligible(int n)
{
    if (n >= 18)
    {
        cout << "Eligible" << endl;
    }
    else
    {
        cout << "Not Eligible" << endl;
    }
    return 0;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int age;
    //     cin >> age;
    //     printEligible(age);
    // }
    int age;
    cout << "Enter the age: " << endl;
    cin >> age;
    printEligible(age);

    return 0;
}