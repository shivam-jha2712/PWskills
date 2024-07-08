#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
double Area(int r){
    double area  = 3.14 * pow(r,2);
    return area;
}
double Circumference(int r){
    double circumference = 2*3.14*r;
    return circumference;
}

int main() // MAIN DEFINATION
{
    int r;
    cin >> r;
    double area = Area(r);
    double circumference = Circumference(r);
    
    cout << "Area : " << area << endl;
    cout << "Circumference : " << circumference << endl;
    return 0;
}