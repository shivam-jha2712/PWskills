#include <bits/stdc++.h> // HEADER FILE

using namespace std;

void reverse(int i);

int main() // MAIN DEFINATION
{
    
    reverse(1);
    return 0;
}

void reverse(int i)
{
    if(i>5)
    return;
    cout << i << " ";
    return reverse((i++, i)); 
}