
#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter elements of Array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    set<int> unique_nums(numbers.begin(), numbers.end());

    if (unique_nums.size() < 2)
    {
        cout << "No second smallest element found.\n";
    }
    else
    {
        auto it = unique_nums.begin();
        advance(it, 1);
        cout << "Second smallest element: " << *it << "\n";
    }
    return 0;
}
