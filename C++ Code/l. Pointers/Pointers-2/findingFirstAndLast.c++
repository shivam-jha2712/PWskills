#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
void findFirstAndLast(string s, char ch, int *start, int *end) {

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ch)
        {
            *start = i;
            break;
        }
    }

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if(s[i] == ch)
        {
            *end = i;
            break;
        }
    }
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);
    string s = "aaabac";
    char ch = 'a';
    int first = -1;
    int last = -1;

    int *ptrf = &first;
    int *ptrl = &last;

    findFirstAndLast(s, ch ,ptrf, ptrl);

    cout << *ptrf << " " << *ptrl << endl;

    cout << first << " " << last << endl;
    return 0;
}