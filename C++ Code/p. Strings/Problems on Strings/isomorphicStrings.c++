#include <bits/stdc++.h> // HEADER FILE

using namespace std;

// Isomorphic strings are those in which each string element is mapped in a one to one relationship with all the elements of the second string.

bool isIsomorphic(string s1, string s2)
{

    // Taking two frequency vector each of size 128(All possible ASCII sets), and intialize it with -1, so that we could use indexs of strings as a unique value for updating the frequency vector index
    vector<int> v1(128, -1);
    vector<int> v2(128, -1);

    if (s1.size() != s2.size()) // if string size is not equal then it is not isomorphic
    {
        return false;
    }
    // And if the size is same then: For each character in both the strings, check if each character is or not a part of the mapped value in its corresponding frequency vectors.
    for (int i = 0; i < s1.size(); i++)
    {
    if(v1[s1[i]] != v2[s2[i]])
    {
        return false;
    }
    // And if yes they are mapped correctly. Then, update the frequency vector at there ASCII index in the corresponding frequency vector, with the index value of the corresponding character in the given strings.
    v1[s1[i]] = v2[s2[i]] = i;
    }

    return true;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    if (isIsomorphic(s1, s2))
    {
    cout << "Is isomorphic" << endl;
    }
    else
    {
    cout << "Is not isomorphic" << endl;
    }
    return 0;
}