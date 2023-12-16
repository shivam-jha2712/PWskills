#include <iostream>
#include <stack>

using namespace std;

class MinStack
{
    stack<int> mainStack; // Main stack to store elements
    stack<int> minStack;  // Auxiliary stack to store minimum elements

public:
    void push(int x)
    {
        mainStack.push(x); // Push element to the main stack

        // Update the minimum stack if the new element is smaller or equal to the current minimum
        if (minStack.empty() || x <= minStack.top())
        {
            minStack.push(x);
        }
    }

    void pop()
    {
        // Pop the top element from the main stack
        int poppedElement = mainStack.top();
        mainStack.pop();

        // If the popped element is the current minimum, also pop it from the minimum stack
        if (poppedElement == minStack.top())
        {
            minStack.pop();
        }
    }

    int top()
    {
        // Return the top element of the main stack
        return mainStack.top();
    }

    int getMin()
    {
        // Return the top element of the minimum stack, which represents the current minimum
        return minStack.top();
    }
};

int main()
{
    MinStack minStack;

    // Example usage
    minStack.push(5);
    minStack.push(2);
    minStack.push(8);
    minStack.push(1);

    cout << "Minimum element: " << minStack.getMin() << endl; // Output: Minimum element: 1

    minStack.pop();
    minStack.pop();

    cout << "Top element: " << minStack.top() << endl;        // Output: Top element: 2
    cout << "Minimum element: " << minStack.getMin() << endl; // Output: Minimum element: 2

    return 0;
}
