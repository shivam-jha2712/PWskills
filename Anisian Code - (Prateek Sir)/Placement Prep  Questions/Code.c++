#include <bits/stdc++.h>
using namespace std;
#define N 100005

void createHash(set<int> &hash,
                int maxElement)
{
    int prev = 0, curr = 1, next = 1;
    hash.insert(prev);
    hash.insert(curr);
    hash.insert(next);

    while (next <= maxElement)
    {
        int temp = next + curr + prev;
        hash.insert(temp);
        prev = next;
        next = temp;
    }
}

int longestTribonacciSubsequence(
    int arr[], int n)
{
    set<int> hash;
    createHash(
        hash,
        *max_element(arr, arr + n));

    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        if (hash.find(arr[i]) != hash.end())
        {
            answer++;
        }
    }

    return answer;
}

// Driver code
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << longestTribonacciSubsequence(arr, n)
         << endl;

    return 0;
}
