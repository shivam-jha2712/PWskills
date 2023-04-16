#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void lexical_compare(char fruit[][60], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Finding the minimum element
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            // "strcmp" gives value > 0 (when lexically fruit[min_index] > fruit[j]) and if it is equal to "0" then that means both are equal.
            if (strcmp(fruit[min_index], fruit[j]) > 0)
            {
                min_index = j;
            }
        }
        // Placing the minmium element at its position
        if (i != min_index)
            swap(fruit[i], fruit[min_index]);
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    char fruit[][60] = {"watermelon", "apple", "kiwi", "papaya", "lime", "mango"};
    int n = sizeof(fruit) / sizeof(fruit[0]);

    lexical_compare(fruit, n);

    for (int i = 0; i < n; i++)
    {
        cout << fruit[i] << " ";
    }

    return 0;
}