#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int printRangeOfOddNumbers(int num1, int num2)
{
    while (num2 > num1)
    {
        if (num1 % 2 != 0)
        {
            cout << num1 << " ";
        }
        num1++;
    }
    return 0;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int start, end;
    cout << "Enter the Numbers of the range : " << endl;
    cin >> start >> end;
    printRangeOfOddNumbers(start, end);
    return 0;
}