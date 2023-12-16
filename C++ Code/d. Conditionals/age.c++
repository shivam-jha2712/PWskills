#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int age;
    cin >> age;
    if (age < 12)
        cout << "Child" << endl;
    else if (age >= 12 && age <= 18)
        cout << "Teenager" << endl;
    else
        cout << "Adult" << endl;
    return 0;
}