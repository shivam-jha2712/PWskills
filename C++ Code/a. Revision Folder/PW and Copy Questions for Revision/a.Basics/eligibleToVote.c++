#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
void Eligible(int age){
    if(age>= 18){
        cout << "Yes" << endl;
    }
    else
    {
        cout<< "No" << endl;
    }
}

int main() // MAIN DEFINATION
{

    int age;
    cin >> age;
    Eligible(age);
    return 0;
}