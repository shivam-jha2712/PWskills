#include <iostream>
#include <unordered_map>
using namespace std;

int solution(char *row1, char *row2)
{
    unordered_map<char, int> charCount;

    // Count the occurrences of "R" and "W" characters in row1
    for (int i = 0; row1[i] != '\0'; i++)
    {
        charCount[row1[i]]++;
    }

    // Count the occurrences of "R" and "W" characters in row2
    for (int i = 0; row2[i] != '\0'; i++)
    {
        charCount[row2[i]]++;
    }

    // Find the maximum count among "R" and "W"
    int maxCount = max(charCount['R'], charCount['W']);

    // Check if no replacements can be done to balance the board
    if (maxCount - charCount['R'] > 1 || maxCount - charCount['W'] > 1)
    {
        return -1;
    }

    // Calculate the number of replacements needed to make the board balanced
    int replacements1 = maxCount - charCount['R'];
    int replacements2 = maxCount - charCount['W'];

    // Return the total number of replacements
    return replacements1 + replacements2;
}

int main()
{
    char row1[] = "?RW?WR";
    char row2[] = "?WR?RW";

    int minReplacements = solution(row1, row2);
    cout << "Minimum replacements needed to balance the board: " << minReplacements << endl;

    return 0;
}
