#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
    {
        return false;
    }
    if (n < 4)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

// Function to find the smallest prime number that satisfies the given condition
int findMinPrime(vector<int> &dynamicVector)
{
    int q = *min_element(dynamicVector.begin(), dynamicVector.end());

    dynamicVector.erase(remove(dynamicVector.begin(), dynamicVector.end(), q), dynamicVector.end());

    for (int p = q + 1; p < 10000000; p++)
    {
        bool isPrimeFlag = true;

        for (size_t i = 0; i < dynamicVector.size(); i++)
        {
            if (dynamicVector[i] != q && p % dynamicVector[i] != q)
            {
                isPrimeFlag = false;
                break;
            }
        }

        if (isPrimeFlag && isPrime(p))
        {
            return p;
        }
    }

    return -1;
}

int main()
{

    vector<int> dynamicVector;
    int inputValue;

    while (cin >> inputValue)
    {
        dynamicVector.push_back(inputValue);
    }
    int result = findMinPrime(dynamicVector);

    // cout << result << endl;

    if (result != -1)
    {
        cout << result;
    }
    else
    {
        cout << "None";
    }

    return 0;
}

