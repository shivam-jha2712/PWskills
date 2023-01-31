#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); // For fast I/O
 cin.tie(0);
 cout.tie(0);
 cout << "Enter the size of the array: ";
 int n;
 cin >> n;

 cout << "Enter the elements of the array: ";
 vector<int> v(n);
 for(int i = 0; i<n; i++)
 {
    cin >> v[i];
 }
//  LOGIC OF THE QUESTION:
// Here we made a frequency array of size 10^5 in which if the query asked by the user is present then the 
// The place equivalent to query number is incremented and thus making it less hectice for us to 
// No traverse the complete array instead just do it once and find all the queries


 const int N = 1e5 + 10; // This is basically defining a constant N which is of size 10^5
 vector <int> freq(N,0); 
 //We have intialized a vector that can contain N elements and it starts from 0
 for(int i =0; i<n; i++)
 {
    freq[v[i]]++;
 } 

 cout << "Enter Queires: " ;
 int q;
 cin >> q;

 while(q--){
    int queryelement;
    cin >> queryelement;
    cout << freq[queryelement] << endl;
 }
    return 0;
}