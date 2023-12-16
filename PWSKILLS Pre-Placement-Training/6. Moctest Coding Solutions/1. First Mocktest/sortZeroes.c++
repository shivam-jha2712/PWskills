#include <iostream>
#include<vector>

using namespace std;

void relativeOrder(vector<int> &v)
{
    int n = v.size();
    int insertAtIndex = 0; // Pointer for inserting non-zero elements

    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            v[insertAtIndex] = v[i]; // Move non-zero element to the current insert index
            insertAtIndex++;
        }
    }
    // For loop ends and non zero insertion is complete
    // While loop begins and zero insertion is started
    while (insertAtIndex < n)
    {
        v[insertAtIndex] = 0; // Fill the remaining elements with zero
        insertAtIndex++;
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    relativeOrder(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}