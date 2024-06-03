#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
void solve() {
    int a, b, c;
    cin >> a >> b >> c; 

    if(a<b && b > c){
        cout << "PEAK" << endl;
    }
    else if(a<b && b<c){
        cout << "STAIR" <<endl;
    }
    else{
        cout << "NONE" << endl;
    }

}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

int n;
cin >> n;

while(n--){
    solve();
}
    return 0;
}