#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int solution(char *S, vector<int>C, int N)
{
    int n = S.length();

    
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int n;
    cin >> n;

    vector<int> C(n);

    for (int i = 0; i < n; i++)
    {
        cin >> C[i];
    }

    cout << "Number of Operations that can be stopped :" << solution(s, C, n);

    return 0;
}