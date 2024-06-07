#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isAbundant(int n)
{
    int original = n;

    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum > original)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (isAbundant(n))
    {
        cout << "Abundant" << endl;
    }
    else
    {
        cout << "Not Abundant" << endl;
    }
    return 0;
}