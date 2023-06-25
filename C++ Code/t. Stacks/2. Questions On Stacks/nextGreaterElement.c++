#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// Function to find the next greater element for each element in the input vector
vector<int> nextGreaterElement(vector<int> &input)
{
    int n = input.size();
    vector<int> output(n); // Resize the output vector to match the size of the input vector

    stack<int> st; // Stack to store indices of elements

    st.push(0); // Push the first index to the stack

    // Traverse through the input vector
    for (int i = 0; i < n; i++)
    {
        // Check if the current element is greater than the element at the top of the stack
        // If true, set the next greater element for the element at the top of the stack
        while (!st.empty() && input[i] > input[st.top()])
        {
            output[st.top()] = input[i];
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

    return output; // Return the vector containing the next greater elements
}

vector<int> nextSmallerElement(vector<int> &input)
{
    int n = input.size();
    vector<int> output(n); // Resize the output vector to match the size of the input vector

    stack<int> st;

    st.push(0);

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && input[i] < input[st.top()])
        {
            output[st.top()] = input[i];
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        output[st.top()] = -1;
        st.pop();
    }

    return output;
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

    vector<int> res = nextGreaterElement(v);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    vector<int> result = nextSmallerElement(v);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
