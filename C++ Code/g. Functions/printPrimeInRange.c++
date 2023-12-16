#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int printRangeOfOddNumbers(int num1, int num2)
{
    int i = 2, flag = 0;
    if (num1 == 0 || num1 == 1)
    {
        flag = 1;
        cout << num1 << " ";
    }

    while (num2 / 2 >= i)
    {

        if (num1 % i == 0)
        {
            flag = 1;
            cout << num1 << " ";
            break;
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