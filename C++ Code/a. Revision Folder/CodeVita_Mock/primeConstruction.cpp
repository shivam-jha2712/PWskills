#include <bits/stdc++.h>

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

long long findMinPrime(vector<long long> dynamicVector)
{
    int q = *min_element(dynamicVector.begin(), dynamicVector.end());

    for (int p = q + 1; p < 10000000000; p++)
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
    vector<long long> dynamicVector;
    long long inputValue;

    while (true)
    {
        cin >> inputValue;
        dynamicVector.push_back(inputValue);

        if (cin.get() == '\n')
        {
            break;
        }
    }

    cout << findMinPrime(dynamicVector);

    return 0;
}

/*
// List of prime numbers
    vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    int q = *min_element(dynamicVector.begin(), dynamicVector.end());

    dynamicVector.erase(remove(dynamicVector.begin(), dynamicVector.end(), q), dynamicVector.end());

    vector<int> temp;

    if (q % 2 == 0)
    {
        return -1;
    }

    for (int i : p)
    {
        for (int j : dynamicVector)
        {
            if (i % j == q)
            {
                temp.push_back(i);
            }
        }

        if (temp.size() == dynamicVector.size())
        {
            return i;
        }

        temp.clear();
    }

    return -1;
*/