#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int simpleAddition(int n)
{
    int sum = n*(n + 1)/2;
    return sum;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << simpleAddition(n);

    return 0;
}

/*
//  For this challenge you will be adding up all the numbers from 1 to a certain argument.

#include <iostream>
using namespace std;

int SimpleAdding(int num) {

    int total = 0;

    for (int x = 1; x <= num; x++)
    {
        total += x;
    }
    return total;
}

int main() {

    // keep this function call here
    cout << SimpleAdding(12);
    return 0;
}
*/