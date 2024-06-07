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

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         int x;
//         cin >> n >> x;

//         if (n < x)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     helper();
// }

/**

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<vector<char>> rotateBox(const vector<vector<char>> &box)
{
    int m = box.size();
    int n = box[0].size();
    vector<vector<char>> rotatedBox(n, vector<char>(m, '.'));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (box[i][j] == '.' || box[i][j] == '*')
            {
                rotatedBox[j][m - 1 - i] = box[i][j];
            }
            else
            { // Handling falling of stones
                int newRow = j;
                while (newRow + 1 < n && (rotatedBox[newRow + 1][m - 1 - i] == '.' || rotatedBox[newRow + 1][m - 1 - i] == '*'))
                {
                    newRow++;
                }
                rotatedBox[newRow][m - 1 - i] = '#';
            }
        }
    }

    return rotatedBox;
}

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
        for (size_t i = 0; i < testCase.size(); i++)
        {
            for (size_t j = 0; j < testCase[i].size(); j++)
            {
                outputFile << testCase[i][j];
            }
            outputFile << endl;
        }
        outputFile << endl;
    }

    outputFile.close();
}

void saveAnswersToFile(const vector<vector<vector<char>>> &answers, const string &filename)
{
    ofstream outputFile(filename);
    if (!outputFile.is_open())
    {
        cout << "Error opening the file: " << filename << endl;
        return;
    }

    for (const auto &answer : answers)
    {
        for (size_t i = 0; i < answer.size(); i++)
        {
            for (size_t j = 0; j < answer[i].size(); j++)
            {
                outputFile << answer[i][j];
            }
            outputFile << endl;
        }
        outputFile << endl;
    }

    outputFile.close();
}

int main()
{
    srand(time(0));
    long long t = 40;
    vector<vector<vector<char>>> testCases;
    vector<vector<vector<char>>> answers;

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

        testCases.push_back(box);
        answers.push_back(rotateBox(box));
    }

    saveTestCasesToFile(testCases, "input.txt");
    saveAnswersToFile(answers, "output.txt");

    return 0;
} */

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<vector<char>> rotateTheBox(vector<vector<char>> &box)

{
    int n = box.size();
    int m = box[0].size();
    vector<vector<char>> rotateTheBox_ans;
    for (int i = 0; i < n; i++)
    {
        // check for the obstacle from the bottom of the box matrix
        int stone = 0, obstacle = m;
        for (int j = m - 1; j >= 0; --j)
        {
            if (box[i][j] == '*')
            {
                obstacle = j;
                stone = 0;
            }
            else if (box[i][j] == '#')
            {
                // the newObstacle will be from when the stone
                // itself is placed at the right position
                // then the next stone will be upon the other stone
                int newObstacle = obstacle - stone - 1;
                box[i][j] = '.';
                box[i][newObstacle] = '#';
                stone++;
            }
        }
    }
    // rotate 90 degrees
    for (int j = 0; j < m; ++j)
    {
        vector<char> ans;
        for (int i = n - 1; i >= 0; --i)
        {
            ans.push_back(box[i][j]);
        }
        rotateTheBox_ans.push_back(ans);
    }
    return rotateTheBox_ans;
}

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
        for (size_t i = 0; i < testCase.size(); i++)
        {
            for (size_t j = 0; j < testCase[i].size(); j++)
            {
                outputFile << testCase[i][j] << " ";
            }
            outputFile << endl;
        }
        outputFile << endl;
    }

    outputFile.close();
}

int main()
{
    srand(time(0));
    long long t = 40;
    vector<vector<vector<char>>> testCases;
    vector<vector<vector<char>>> answers;

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

        testCases.push_back(box);
        answers.push_back(rotateTheBox(box));
    }

    saveTestCasesToFile(testCases, "input.txt");
    saveTestCasesToFile(answers, "output.txt");

    return 0;
}
