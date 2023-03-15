#include<bits/stdc++.h>
using namespace std;

/*Here the story is a bit diffrent here what we have to do is taking  two pointers one from the intial end and the second one from the size-1 and then what we do is 
we travese the array from both the direction and since we have to sort it we know that in order to get it sorted we need all the zeroes ahead and 
all the ones at the last thus we keep on swapping their positions unless we don't reach to a common position*/ 

// 1 1 0 0 1 0 1 0
// left_ptr = 0;
// right_ptr = 7;
void sortZeroesAndOnes(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while(left_ptr <right_ptr)
    {
        if(v[left_ptr]==1 && v[right_ptr]==0)
        {
            v[left_ptr] =0;
            v[right_ptr] = 1;

            left_ptr++;
            right_ptr--;
        }

        if(v[left_ptr]==0)
        {
            left_ptr++;
        }

        if(v[right_ptr]==1)
        {
            right_ptr--;
        }
    }

} 

int main()
{
 ios_base::sync_with_stdio(false); // For fast I/O
 cin.tie(0);
 cout.tie(0);
 

 int n;
 cin >> n;

 vector<int> v;

 for(int  i =0; i<n; i++)
 {
    int ele;
    cin >> ele;
    v.push_back(ele);
 }

 sortZeroesAndOnes(v);

 for(int i=0; i<n; i++)
 {
    cout << v[i] << " ";
 }
 cout << endl;
    return 0;
}