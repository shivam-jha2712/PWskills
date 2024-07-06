#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    int n;
    cin >> n;
    vector<int>v(n);

    for(int i =0; i<n; i++){
        cin >> v[i];
    }

    int target;
    cin >> target;

    int countOfTarget = 0;
    int countGreaterThanTarget = 0;
    bool sorted = true;
    int sumAtEven = 0;
    int sumAtOdd = 0;
    for(int i = 0; i<n; i++){
        if(v[i] == target){
            countOfTarget++;
        }
        if(v[i]> target){
            countGreaterThanTarget++;
        }
        if(v[i+1] < v[i]){
            sorted = false;
        }
        if(i%2 == 0){
            sumAtEven = sumAtEven+v[i];
        }
        if(i%2 != 0){
            sumAtOdd = sumAtOdd+v[i];
        }
    }
   

    cout << "The number of occurence of target  is: " << countOfTarget << endl;
    cout << "The number occurence of elements greater than target  is: " << countGreaterThanTarget << endl;
    if(sorted == true){
        cout << "Given array is sorted" << endl;
    }
    else if (sorted == false){
        cout << "Given array is not sorted" << endl;
    }
    cout << "Diffrence between sum at even and odd indices :" << sumAtEven - sumAtOdd << endl;
    return 0;
}