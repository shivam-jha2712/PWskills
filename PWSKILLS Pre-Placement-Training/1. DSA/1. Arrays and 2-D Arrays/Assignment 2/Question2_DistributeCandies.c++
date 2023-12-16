/*
Question 2
Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor.

The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes her candies very much, and she wants to eat the maximum number of different types of candies while still following the doctor's advice.

Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.

Example 1:
Input: candyType = [1,1,2,2,3,3]
Output: 3

Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one of each type.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int distributeCandies(vector<int> &candyType)
{
    int n = candyType.size();

    // Calculate the maximum number of unique candies Alice can eat
    int maxCandies = n / 2;

    // Sort the candies in non-decreasing order
    sort(candyType.begin(), candyType.end());

    // Count the number of unique candies
    int uniqueCandies = 1;
    for (int i = 1; i < n && uniqueCandies < maxCandies; i++)
    {
        if (candyType[i] != candyType[i - 1])
        {
            uniqueCandies++;
        }
    }

    // Return the minimum of the number of unique candies and the maximum allowed
    return min(uniqueCandies, maxCandies);
}

int main()
{
    int n;
    cin >> n;

    vector<int> candyType(n);
    // {1, 1, 2, 2, 3, 3}

    for (int i = 0; i < n; i++)
    {
        cin >> candyType[i];
    }

    int maxDifferentTypes = distributeCandies(candyType);

    cout << "Maximum number of different types of candies Alice can eat: " << maxDifferentTypes << endl;

    return 0;
}
