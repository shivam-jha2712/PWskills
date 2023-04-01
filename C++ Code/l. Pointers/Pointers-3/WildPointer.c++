#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);
    int *ptr; // Only declared thus would be pointing some random memory in the space thus might create memory/Segmentaion fault later in the program. If that memory to which it was pointing to is being accessed.

    cout << ptr << " " << *ptr;
    return 0;
}