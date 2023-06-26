#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// nextSmallestIndex - nsi
// previousSmallestIndex - psi

int maxAreaHistogram(vector<int> &input)
{
    int n = input.size();

    stack<int> st;
    int ans = INT_MIN;

    st.push(0);

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && input[i] < input[st.top()])
        {
            int curr = input[st.top()];
            st.pop();
            int nsi = i;
            int psi = (st.empty()) ? -1 : st.top();
            ans = max(ans, curr * (nsi - psi - 1));
        }
        st.push(i);
    }

    while (!st.empty())
    {
        int curr = input[st.top()];
        st.pop();
        int nsi = n;
        int psi = (st.empty()) ? -1 : st.top();
        ans = max(ans, curr * (nsi - psi - 1));
    }

    return ans;
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
