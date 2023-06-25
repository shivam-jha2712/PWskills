#include <iostream>
#include <stack>
#include <vector>
#include <algorithm> // Include the algorithm library for the reverse function

using namespace std;

// Function to find the previous greater element for each element in the input vector
vector<int> previousGreaterElement(vector<int> &input)
{
    int n = input.size();

    // Step 1: Reverse the original vector
    reverse(input.begin(), input.end());

    // Step 2: Find the previous greater element
    vector<int> output(n, -1); // Resize the output vector to match the size of the input vector

    stack<int> st; // Stack to store indices of elements

    st.push(0); // Push the first index to the stack

    // Traverse through the input vector
    for (int i = 0; i < n; i++)
    {
        // Check if the current element is greater than the element at the top of the stack
        // If true, set the previous greater element for the element at the top of the stack
        while (!st.empty() && input[i] > input[st.top()])
        {
            output[st.top()] = n - i - 1; // this done as on 2nd reversal the index will change and will change acoording to this form.
            st.pop();
        }

        st.push(i); // Push the current index to the stack
    }

    // Process the remaining elements in the stack
    while (!st.empty())
    {
        output[st.top()] = -1; // No greater element found, set as -1
        st.pop();
    }

    // Step 3: Again reverse the output array to restore the original order
    reverse(output.begin(), output.end());
    reverse(input.begin(), input.end());

    return output; // Return the vector containing the previous greater elements
}

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

    cout << "Stock Span: " << endl;
    vector<int> res = previousGreaterElement(v); // Step 1: Calling the function previousGreaterElement with the modification of using (n-i-1) instead of input[i];

    for (int i = 0; i < res.size(); i++)
    {
        cout << i - res[i] << " "; // Step 2 : Logic of taking diffrence between index and the index of the previousGreaterElement
    }
    cout << endl;

    return 0;
}
