#include <iostream>
#include <vector>
using namespace std;

vector<int> findCommonElements(vector<int> &ar1, vector<int> &ar2, vector<int> &ar3)
{
    vector<int> commonElements;
    int i = 0, j = 0, k = 0;

    while (i < ar1.size() && j < ar2.size() && k < ar3.size())
    {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
        {
            commonElements.push_back(ar1[i]);
            i++;
            j++;
            k++;
        }
        else if (ar1[i] < ar2[j])
        {
            i++;
        }
        else if (ar2[j] < ar3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    return commonElements;
}

int main()
{
    vector<int> ar1 = {1, 5, 10, 20, 40, 80};
    vector<int> ar2 = {6, 7, 20, 80, 100};
    vector<int> ar3 = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> commonElements = findCommonElements(ar1, ar2, ar3);

    cout << "Common Elements: ";
    for (int i = 0; i < commonElements.size(); i++)
    {
        cout << commonElements[i] << " ";
    }
    cout << endl;

    return 0;
}
