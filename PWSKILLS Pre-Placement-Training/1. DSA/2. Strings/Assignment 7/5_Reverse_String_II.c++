#include <iostream>
#include <string>
using namespace std;

string reverseStr(string s, int k)
{
    int n = s.size();

    for (int i = 0; i < n; i += 2 * k)
    {
        int left = i;
        int right = min(i + k - 1, n - 1);

        while (left < right)
            swap(s[left++], s[right--]);
    }

    return s;
}

int main()
{
    string s = "abcdefg";
    int k = 2;

    string reversed = reverseStr(s, k);

    // Print the reversed string
    cout << reversed << endl;

    return 0;
}
