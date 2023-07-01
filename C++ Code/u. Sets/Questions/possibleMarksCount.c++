#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n, p, q;
    cin >> n >> p >> q;

    unordered_set<int> s;

    // Iterate over all possible combinations of correct, incorrect, and unattended questions
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int correct = i;
            int incorrect = j;
            int unattended = n - (i + j);

            // Ensure that the number of unattended questions is non-negative
            if (unattended >= 0)
            {
                // Calculate the score based on the given weights for correct and incorrect answers
                int score = p * correct + q * incorrect;

                // Store the score in the unordered set to keep track of unique scores
                s.insert(score);
            }
        }
    }

    // Print the count of unique possible scores
    cout << "Possible Count: " << s.size() << endl;

    return 0;
}