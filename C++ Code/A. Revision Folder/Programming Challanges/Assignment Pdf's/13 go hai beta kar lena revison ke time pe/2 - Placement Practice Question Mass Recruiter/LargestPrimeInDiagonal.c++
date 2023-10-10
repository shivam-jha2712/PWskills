/*
You are given a 0-indexed two-dimensional integer array nums.

Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0 in c++ code this
*/

/*
To solve this problem, we can iterate over each diagonal of the 2D array and check if any of the numbers on the diagonal are prime. To iterate over the diagonals, we can use two nested loops: the outer loop iterates over the rows of the array, and the inner loop iterates over the columns.

For each diagonal, we can use a boolean variable to keep track of whether a prime has been found. If we find a prime, we can update a variable to keep track of the largest prime found so far.
*/

#include <vector>
#include <cmath>

using namespace std;

bool is_prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    int root = sqrt(n);
    for (int i = 2; i <= root; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int largest_prime_on_diagonal(vector<vector<int>> &nums)
{
    int largest_prime = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        // check main diagonal
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j && is_prime(nums[i][j]))
                {
                    largest_prime = max(largest_prime, nums[i][j]);
                }
            }
        }
        // check diagonal from top right to bottom left
        if (i == 0 || i == n - 1)
        {
            int j = n - i - 1;
            if (is_prime(nums[i][j]))
            {
                largest_prime = max(largest_prime, nums[i][j]);
            }
        }
        // check diagonal from top left to bottom right
        if (i > 0 && i < n - 1)
        {
            if (is_prime(nums[i][i]))
            {
                largest_prime = max(largest_prime, nums[i][i]);
            }
            int j = n - i - 1;
            if (is_prime(nums[i][j]))
            {
                largest_prime = max(largest_prime, nums[i][j]);
            }
        }
    }
    return largest_prime;
}

// [ [ 1, 2, 3 ], [ 5, 6, 7 ], [ 9, 10, 11 ] ]  - Output - 11
// [ [ 1, 2, 3 ], [ 5, 17, 7 ], [ 9, 11, 10 ] ] - Output  - 17

    /*
    The is_prime function checks whether a number is prime or not. It returns true if the number is prime, and false otherwise.

    The largest_prime_on_diagonal function iterates over each diagonal of the 2D array and checks if any of the numbers on the diagonal are prime. It keeps track of the largest prime found so far and returns it at the end. If no prime is found, it returns 0.

    Note that we check the main diagonal and the two off-diagonals separately, as they have different patterns. The main diagonal consists of elements where the row index equals the column index, the diagonal from top right to bottom left consists of elements where the row index plus the column index equals n - 1, and the diagonal from top left to bottom right consists of all other elements.
    */