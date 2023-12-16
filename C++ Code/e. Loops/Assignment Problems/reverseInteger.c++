#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n, lastdigit, reverse = 0;
    cin >> n;
    while (n > 0)
    {
        lastdigit = n % 10; // last digit finding -  First Step
        n = n / 10;         // Number after last digit removal - Second Step
        reverse = (reverse * 10) + lastdigit;
        // since if it is 538 then by  First Step I will get 8 thus we will need to use it by (8*10)+3= 83 then again it will be (83*10)+5 = 835. Thus reaching the reverse of the given integer
    }
    cout << reverse;
    return 0;
}