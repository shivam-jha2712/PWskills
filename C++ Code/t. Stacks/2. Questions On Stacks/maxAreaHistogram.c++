#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// nextSmallestIndex - nsi
// previousSmallestIndex - psi

// Function to find the maximum area of a histogram given an input vector representing the heights of bars
int maxAreaHistogram(vector<int> &input)
{
    int n = input.size();

    stack<int> st;     // Stack to store the indices of bars
    int ans = INT_MIN; // Variable to store the maximum area

    st.push(0); // Push the first index to the stack

    for (int i = 0; i < n; i++)
    {
        // Check if the current bar is shorter than the bar at the top of the stack
        // If true, calculate the area of the rectangle with the top bar as the smallest bar
        while (!st.empty() && input[i] < input[st.top()])
        {
            int curr = input[st.top()]; // Height of the top bar
            st.pop();                   // Pop the top bar index

            int nsi = i;                            // Next smaller index (right boundary of the rectangle)
            int psi = (st.empty()) ? -1 : st.top(); // Previous smaller index (left boundary of the rectangle)
            ans = max(ans, curr * (nsi - psi - 1)); // Calculate the area and update the maximum area
        }

        st.push(i); // Push the current index to the stack
    }

    // Process the remaining bars in the stack
    while (!st.empty())
    {
        int curr = input[st.top()]; // Height of the top bar
        st.pop();                   // Pop the top bar index

        int nsi = n;                            // Next smaller index (right boundary of the rectangle)
        int psi = (st.empty()) ? -1 : st.top(); // Previous smaller index (left boundary of the rectangle)
        ans = max(ans, curr * (nsi - psi - 1)); // Calculate the area and update the maximum area
    }

    return ans; // Return the maximum area of the histogram
}

// Test Case : 2 1 5 6 2 3 0 2 1 5 6 2 3
// Output : 10

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << maxAreaHistogram(v) << endl;

    // for (int i = 0; i < res.size(); i++)
    // {
    //     cout << res[i] << " ";
    // }
    // cout << endl;

    // vector<int> result = nextSmallerElement(v);

    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }

    return 0;
}
