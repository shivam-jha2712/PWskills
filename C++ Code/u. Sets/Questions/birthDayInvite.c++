#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    set<string> inviteList; //

    int n;
    cin >> n;

    while (n--)
    {
        string name;
        cin >> name;

        inviteList.insert(name);
    }

    cout << "Invite List :" << endl;
    for (auto naam : inviteList)
    {
        cout << naam << endl;
    }

    return 0;
}