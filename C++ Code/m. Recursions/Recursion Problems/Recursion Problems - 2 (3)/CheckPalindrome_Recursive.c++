#include <bits/stdc++.h> // HEADER FILE

using namespace std;

bool checkPalindrome(int num, int *temp)
{
    // Base Case: If single digit then return true
    if(num >= 0 && num <=9){
        int lastDigitOfTemp = (*temp) % 10;
        (*temp) /= 10;
        return (num == lastDigitOfTemp);
    }
// Assume it will always  give the correct output for f(n/10 , *temp);
    else{
        bool result = (checkPalindrome(num/10, temp) && (num%10) == ((*temp)%10));
        (*temp)/= 10;
        return result;
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n; // 12621
    int n2 = n;
    int *temp = &n2;
    cout << checkPalindrome(n, temp);

    return 0;
}