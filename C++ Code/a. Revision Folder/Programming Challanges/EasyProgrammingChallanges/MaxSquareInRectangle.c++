#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b>a)
    {
        return gcd(b,a);
    }
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b, a%b);
    }
}
int make_square_plots(int length, int breadth) {
    int data = gcd(length, breadth);

    int num_square_plots = (length / data) * (breadth / data);

    return num_square_plots;
}

int main() {
    int length, breadth;
    cout << "Enter the length of the rectangular plot: ";
    cin >> length;
    cout << "Enter the breadth of the rectangular plot: ";
    cin >> breadth;
    
    int result = make_square_plots(length, breadth);
    cout << "Number of square plots that can be created: " << result << endl;
    
    return 0;
}