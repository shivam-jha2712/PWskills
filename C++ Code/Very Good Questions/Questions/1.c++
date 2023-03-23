// #include<bits/stdc++.h> // HEADER FILE
    
// using namespace std;
    
// int main() // MAIN DEFINATION
// {
//     ios_base::sync_with_stdio(false);  //For fast I/O
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i =0; i<n; i++)
//     {
//         cin >> array[i];
//     }

//     sort(array, array + n);
//     int ans = 0;
//     for(int i =0; i<n; i++)
//     {
//         for(int j =i+1; j<n; j++)
//         {
//             if(array[i]+array[j] == array[n-1])
//             {
//                ans = array[n-1];
//             }
//             else{
//                 ans = 0;
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    int n = mat.size();
	    int m = mat[0].size();
	    int flag = 0;
	    for(int i =0; i< n; i++)
	    {
	        for(int j =0; j< m; j++)
	        {
	            if(mat[i][j] == X)
	            {
	                flag = 1;
	            }
	            else
	            {
	                flag = 0;
	            }
	        }
	    }
	     if(flag == 1)
	    {
	        return 1;
	    }
	    else
	    {
	        return 0;
	    }
	}
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends