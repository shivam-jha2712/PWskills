#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    string input;
    getline(cin, input);

    int size = input.size();

    for (int i = 0; i < size; i++)
    {
        if (input[i] <= 122 && input[i] >= 97)
        {
            input[i] = toupper(input[i]);
        }
        else
        {
            input[i] = tolower(input[i]);
        }
       
    }
    // for (int i = 0; i < size; i++)
    // {
    //     if (input[i] <= 90 && input[i] >= 65)
    //     {
    //         input[i] = tolower(input[i]);
    //     }
    // }

    cout << input << endl;
    return 0;
}