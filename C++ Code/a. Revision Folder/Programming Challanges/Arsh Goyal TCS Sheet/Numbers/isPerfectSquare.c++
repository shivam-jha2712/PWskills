#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isPerfectSquare(int num)
{
    int lo = 0;
    int hi = num / 2;

    if (num == 1)
    {
        return true;
    }

    while (lo <= hi)
    {
        long long int mid = lo + (hi - lo) / 2;

        if (mid * mid == num)
        {
            return true;
        }
        else if (mid * mid < num)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return false;
}

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    if (isPerfectSquare(n))
    {
        cout << "Is a perfect Square";
    }
    else
    {
        cout << "Is not a perfect Square";
    }

    return 0;
}