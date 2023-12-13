#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int maxProfit(vector<int> &prices)
{
    int min_stock = INT_MAX;
    int profit = 0;

    for (int i = 0; i < prices.size(); i++)
    {
        profit = max(profit, prices[i] - min_stock);
        min_stock = min(min_stock, prices[i]);
    }
    return profit;
}

int main() // MAIN DEFINATION
{

    string input;
    getline(cin, input);

    stringstream ss(input);
    vector<int> numbers;
    int number;

    while (ss >> number)
    {
        numbers.push_back(number);
    }

    cout << maxProfit(numbers);

    return 0;
}