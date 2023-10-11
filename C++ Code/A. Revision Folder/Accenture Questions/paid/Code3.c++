#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int k, x;
    cin >> k;

    vector<int> numbers;
    map<int, int> frequency;

    while (cin >> x)
    {
        numbers.push_back(x);
        frequency[x]++;
    }

    int uniqueNumber = -1;

    for (auto it = frequency.begin(); it != frequency.end(); it++)
    {
        if (it->second == 1)
        {
            uniqueNumber = it->first;
            break;
        }
    }

    if (uniqueNumber != -1)
    {
        cout << "The unique number is: " << uniqueNumber << endl;
    }
    else
    {
        cout << "No unique number found." << endl;
    }

    return 0;
}
