#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> reconstructPermutation(string s) {
    int n = s.size();
    vector<int> perm(n + 1);
    int small = 0, large = n;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'I')
            perm[i] = small++;
        else
            perm[i] = large--;
    }
    
    perm[n] = small;
    return perm;
}

int main() {
    string s = "IDID";
    vector<int> perm = reconstructPermutation(s);
    
    // Print the reconstructed permutation
    for (int num : perm)
        cout << num << " ";
    cout << endl;
    
    return 0;
}
