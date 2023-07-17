#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int left = 0;
    int right = numbers.size() - 1;

    while (left < right)
    {
        int sum = numbers[left] + numbers[right];

        if (sum == target)
        {
            // Return the indices as a vector
            return {left + 1, right + 1};
        }
        else if (sum < target)
        {
            // Move the left pointer to increase the sum
            left++;
        }
        else
        {
            // Move the right pointer to decrease the sum
            right--;
        }
    }

    // If no solution found, return an empty vector
    return {};
}

int main()
{
    // Read the array from user input
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    // Read the target from user input
    int target;
    cout << "Enter the target: ";
    cin >> target;

    // Find the indices of the two numbers
    vector<int> indices = twoSum(numbers, target);

    // Print the indices
    cout << "[" << indices[0] << ", " << indices[1] << "]" << endl;

    return 0;
}
