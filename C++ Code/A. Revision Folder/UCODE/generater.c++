// #include <bits/stdc++.h>
// using namespace std;

// int randomNumberBetween(int a, int b)
// {
//     if (a > b)
//         swap(a, b);
//     return a + rand() % (b - a + 1);
// }

// void helper()
// {

//     int n = randomNumberBetween(1, 10);
//     int x = randomNumberBetween(1, 10);

//     cout << n << " " << x << endl;
// }

// int main()
// {
// #ifndef ONLINE_JUDGE
//     // freopen("input.txt", "r", stdin);
//     freopen("input.txt", "w", stdout);
// #endif
//     srand(time(0));
//     long long t = randomNumberBetween(1, 1e2);
//     cout << t << endl;
//     while (t--)
//     {
//         helper();
//     }
// }
#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

void saveTestCasesToFile(const vector<vector<vector<char>>> &testCases, const string &filename)
{
    ofstream outputFile(filename);
    if (!outputFile.is_open())
    {
        cout << "Error opening the file: " << filename << endl;
        return;
    }

    for (const auto &testCase : testCases)
    {
        for (const auto &row : testCase)
        {
            for (const auto &ch : row)
            {
                outputFile << ch;
            }
            outputFile << endl;
        }
        outputFile << endl;
    }

    outputFile.close();
}

int main()
{
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    freopen("input.txt", "w", stdout);
#endif

    // srand(time(0));
    long long t = rand() % 100 + 1; // Random number between 1 and 100 for test cases
    cout << t << endl;

    while (t--)
    {
        int m = rand() % 10 + 1; // Random number between 1 and 10 for rows
        int n = rand() % 10 + 1; // Random number between 1 and 10 for columns
        vector<vector<char>> box(m, vector<char>(n));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int randomNum = rand() % 3;
                if (randomNum == 0)
                {
                    box[i][j] = '#';
                }
                else if (randomNum == 1)
                {
                    box[i][j] = '*';
                }
                else
                {
                    box[i][j] = '.';
                }
            }
        }

        for (const auto &row : box)
        {
            for (const auto &ch : row)
            {
                cout << ch;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
