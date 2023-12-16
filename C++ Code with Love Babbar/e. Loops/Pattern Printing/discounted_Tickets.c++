#include <bits/stdc++.h>

using namespace std;

int main()
{
    string tickets;
    int k;

    // Input the ticket costs and the number of tickets to be removed
    cin >> tickets;
    cin >> k;

    // Sort the ticket costs in ascending order
    sort(tickets.begin(), tickets.end());

    int totalCost = 0;
    int count = 0;

    // Calculate the total cost by considering only the remaining tickets after removing 'k' tickets
    for (int i = k; i < tickets.length(); i++)
    {
        totalCost += tickets[i] - '0';
        count++;
    }

    // Calculate the discounted cost by applying a 50% discount
    int discountedCost = (totalCost * 50) / 100;

    cout << discountedCost << endl;

    return 0;
}
