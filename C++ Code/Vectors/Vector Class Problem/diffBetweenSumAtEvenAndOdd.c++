#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Input the Array;.
    int v[] = {1, 2, 3, 4, 5, 6};

    // Checking Sorting of elements in the vector
    int sum_odd = 0;
    int sum_even = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            sum_even = sum_even + v[i];
        }

        else if (i % 2 != 0)
        {
            sum_odd = sum_odd + v[i];
        }
    }
    int diff = sum_even - sum_odd;
    cout << "Diffrence between Odd and Even index values : " << diff << endl;

    // Also could be done by
    int ans_sum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            ans_sum += v[i];
        }
        else
        {
            ans_sum -= v[i];
        }
    }

    cout << "Diffrence between Odd and Even index values : " << ans_sum << endl;

    return 0;
}
