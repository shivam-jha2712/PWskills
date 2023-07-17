#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> recoverArray(vector<int> &changed)
{
    unordered_map<int, int> freqMap;
    vector<int> original;

    for (int num : changed)
        freqMap[num]++;

    while (!freqMap.empty())
    {
        int smallest = INT_MAX;
        int smallestFreq = 0;

        for (auto it = freqMap.begin(); it != freqMap.end(); it++)
        {
            if (it->second > 0 && it->first < smallest)
            {
                smallest = it->first;
                smallestFreq = it->second;
            }
        }

        original.push_back(smallest);

        freqMap[smallest]--;
        freqMap[smallest / 2]--;

        freqMap.erase(smallest, 0);
        freqMap.erase(smallest / 2, 0);
    }

    return original;
}

int main()
{
    vector<int> changed = {1, 3, 4, 2, 6, 8};

    vector<int> original = recoverArray(changed);

    // Print the original array
    for (int num : original)
        cout << num << " ";
    cout << endl;

    return 0;
}
