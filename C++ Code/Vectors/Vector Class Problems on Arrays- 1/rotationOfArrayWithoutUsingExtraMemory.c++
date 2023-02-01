#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); // For fast I/O
 cin.tie(0);
 cout.tie(0);

    vector <int> v = {1,2,3,4,5};
    int k = 2;
    k= k%v.size();
// Here we are not using any extra memory instead we are using the reverse keyword and then reversing the complete array
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin() + k);
    reverse(v.begin()+k,v.end());

    // WE use for each loop in case of the vector printing as it makes it much easier to understand.
    for(int a:v){
    cout << a <<  " ";
    }
    cout << endl;
    return 0;
}