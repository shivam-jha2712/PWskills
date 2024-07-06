#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isPerfectSquare(int num)
{
    int root = sqrt(num);
    return root * root == num;
}

int sumOfSquareRoots(const vector<int> &nums)
{
    int sum = 0;
    for (int num : nums)
    {
        if (isPerfectSquare(num))
        {
            sum += sqrt(num);
        }
    }
    return sum;
}

int main() // MAIN DEFINATION
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int result = sumOfSquareRoots(v);

    cout << "The sum of the square roots of perfect squares is: " << result << endl;

    return 0;
}