// Consider two numbers where you can both add and subtract within a range
// It is an example of experimental analysis as because they both may vary on the terms of experimental analysis and it is not equivalent always and instead 
// We use Asymptotic analysis method to determine the time taken to perform the actual action in case of execution of a program
#include<bits/stdc++.h>
using namespace std;

// No of operations used in the solution is way too big  
int sum_in_range(int x, int y)
{
    int result = 0; 
    for(int i = x; i <= y; i++)
    {
        result += i; 
    }
    return result;
}

// No of operations used in the solution is way too small  
int sum_in_range_optimised(int  x, int y)
{
    int n= (y-x+1);
    int a = x;
    int result  = (n * (2*a + (n-1)*1)) / 2;
    return result;
}

int main()
{
ios_base::sync_with_stdio(false); // For fast I/O
cin.tie(0);
cout.tie(0);

cout << "sum_in_range : " <<sum_in_range(2,6) << endl;
cout << "sum_in_range_OPTIMISED : " <<sum_in_range_optimised(2,6) << endl;

    return 0;
}