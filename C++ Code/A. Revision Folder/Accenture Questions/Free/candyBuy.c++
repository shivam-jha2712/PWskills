#include <bits/stdc++.h> // HEADER FILE

using namespace std;
int main()
{
    string input;
    getline(cin, input);

    stringstream ss(input);
    vector<int> numbers;

    int num;
    while (ss >> num)
    {
        numbers.push_back(num);
    }

    cout << "OUTPUT : ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    int totalCost;
    cin >> totalCost;

    sort(numbers.begin(), numbers.end());

    int size = numbers.size();

    int lo = 0;

    while (totalCost > numbers[lo] && lo < size)
    {
        totalCost = totalCost - numbers[lo];
        lo++;
    }

    cout << lo << endl;

    return 0;
}

//

// int main() // MAIN DEFINATION
// {
//     ios_base::sync_with_stdio(false); // For fast I/O
//     cin.tie(0);
//     cout.tie(0);

//     vector<int> v;
//     int input;
//     while (cin >> input)
//     {
//         v.push_back(input);

//     }

//     return 0;
// }