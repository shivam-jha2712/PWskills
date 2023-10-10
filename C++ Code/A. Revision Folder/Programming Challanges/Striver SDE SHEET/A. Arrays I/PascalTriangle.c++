#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pascal(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++)
    {
        // Here what you need to keep in mind is that we are creating a copy 1-d vector that has i+1 elements in every case and has all elements to be substituted with 1's
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            // Here we are just removing those 1's and replacing them with elements with the said logic
            row[j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }
        ans.push_back(row);
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number of rows you want : ";
    cin >> n;
    vector<vector<int>> final;
    final = pascal(n);
    for (int i = 0; i < final.size(); i++)
    {
        // Here the size of each row would be same as the row number and thus we are doing this
        for (int j = 0; j < final[i].size(); j++)
        {
            cout << final[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}