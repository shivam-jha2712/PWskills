#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = to_string(n);

    int size = s.size();

    int lo = 0;
    int hi = size - 1; // Fix: Move the declaration here
    int mid = lo + (hi - lo) / 2;

    bool flag1 = (stoi(s.substr(mid, 1)) % 2 == 0);
    bool flag2 = (stoi(s.substr(hi, 1)) % 2 == 0);

    bool result = flag1 && flag2;

    cout <<  result << endl;

    return 0;
}
