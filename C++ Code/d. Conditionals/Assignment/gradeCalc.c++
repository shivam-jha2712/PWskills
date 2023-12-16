#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int Marks;
    cout << "Enter Your Marks : " << endl;
    cin >> Marks;
    if (Marks > 90 && Marks <= 100)
        cout << "Your grade is A+" << endl;
    else if (Marks > 80 && Marks <= 90)
        cout << "Your grade is A" << endl;
    else if (Marks > 70 && Marks <= 80)
        cout << "Your grade is B+" << endl;
    else if (Marks > 60 && Marks <= 70)
        cout << "Your grade is B" << endl;
    else if (Marks > 50 && Marks <= 60)
        cout << "Your grade is C" << endl;
    else if (Marks > 40 && Marks <= 50)
        cout << "Your grade is D" << endl;
    else if (Marks > 30 && Marks <= 40)
        cout << "Your grade is E" << endl;
    else
        cout << "Your grade is F" << endl;

    return 0;
}