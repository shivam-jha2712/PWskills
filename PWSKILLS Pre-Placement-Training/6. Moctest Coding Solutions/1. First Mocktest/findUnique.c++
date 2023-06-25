#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int findUniques(string str)
{
    int result = 0;
    for(auto : str){
        
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    cout << findUniques(str) << endl;

    return 0;
}

// vector<int> freq(26,0); // Solving it using a frequency vector
// for(int i=0; i<26; i++)
// {
//     int index = str[i] - 'a'; // typecasting each alphabet in an integer index of frqeuncy vector
//     freq[index++];
// }