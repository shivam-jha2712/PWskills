#include <iostream>

using namespace std;

bool isPalindrome(int num)
{
    int reversedNum = 0;
    int temp = num;

    while (num > 0)
    {
        int rem = num % 10;
        reversedNum = (reversedNum * 10) + rem;
        num /= 10;
    }

    return (temp == reversedNum);
}

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;

    int ctr = 1;
    int gctr = 0;

    while (ctr == 1)
    {
        int rev = reverse(n);

        if (isPalindrome(n))
        {
            cout << gctr << endl;
            cout << rev << endl;
            ctr = 0;
        }
        else
        {
            gctr++;
            n = n + rev;
        }
    }

    return 0;
}
