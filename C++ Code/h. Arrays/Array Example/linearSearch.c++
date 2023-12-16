#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int answer = -1;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            answer = key;
        }
    }
    cout << answer << endl;

    return 0;
}