#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void printCircleDetails()
{
    int radius;
    cin >> radius;
    cout << "Circumference : ";
    cout << 2 * 3.14 * radius << " ";
    cout << "Area : ";
    cout << 3.14 * pow(radius, 2) << " ";
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int t;
    // cout << "Enter the number of test cases : ";
    cin >> t;
    while (t--)
    {
        printCircleDetails();
    }

    return 0;
}