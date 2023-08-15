#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int minimumCostToAssembleWires(vector<int> &wires)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Push the lengths of wires into the min heap
    for (int length : wires)
    {
        minHeap.push(length);
    }

    int totalCost = 0;

    // Combine wires until only one wire is left in the heap
    while (minHeap.size() > 1)
    {
        int smallestWire1 = minHeap.top();
        minHeap.pop();

        int smallestWire2 = minHeap.top();
        minHeap.pop();

        int combinedLength = smallestWire1 + smallestWire2;
        totalCost += combinedLength;

        minHeap.push(combinedLength);
    }

    return totalCost;
}

int main()
{
    vector<int> wires = {7, 6, 8, 6, 1, 1};
    int minCost = minimumCostToAssembleWires(wires);

    cout << "Minimum cost to assemble wires: " << minCost << endl;

    return 0;
}
