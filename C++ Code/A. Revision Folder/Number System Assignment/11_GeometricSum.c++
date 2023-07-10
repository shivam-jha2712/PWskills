#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int a, n;
    float r;
    cin >> a >> r >> n;

    int term = pow(r, n);

    int sum = 0;

    if (r > 1)
    {
        sum = (a * (term - 1)) / (r - 1);
    }
    else
    {
        double sum = (a * (1 - term)) / (1 - r);
    }

    cout << "sum : " << sum << endl;

    return 0;
}