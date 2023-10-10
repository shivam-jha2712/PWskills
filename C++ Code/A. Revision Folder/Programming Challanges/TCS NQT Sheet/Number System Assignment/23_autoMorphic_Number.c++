#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool isAutoMorphic(int n)
{
    int product = n * n;

    while (n > 0)
    {

        if (n % 10 != product % 10)
            return false;

        n /= 10;
        product /= 10;
    }

    return true;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (isAutoMorphic(n))
    {
        cout << "AutoMorphic Number" << endl;
    }
    else
    {
        cout << "Not AutoMorphic Number" << endl;
    }

    return 0;
}