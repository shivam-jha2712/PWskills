#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int goals;
    cin >> goals;

    string A = "TeamA";
    string B = "TeamB";

    string team;

    int goalCountA = 0;
    int goalCountB = 0;

    while (goals > 0)
    {
        cin >> team;
        if (team == A)
        {
            goalCountA++;
        }
        else if (team == B)
        {
            goalCountB++;
        }

        goals--;
        team = "";
    }

    if (goalCountA > goalCountB)
    {
        cout << A << endl;
    }
    else if (goalCountB > goalCountA)
    {
        cout << B << endl;
    }

    return 0;
}