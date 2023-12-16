#include <iostream>
#include <stack>
using namespace std;

#define ll long long int // Macro definition to simplify long long int

class MinStack
{
public:
    stack<ll> st; // Stack to store the elements
    ll min;       // Variable to store the minimum value

    MinStack()
    {
        this->min = INT_MAX; // Initialize the minimum value to maximum
    }

    void push(int val)
    {
        if (this->st.empty())
        {
            this->min = val; // If stack is empty, set the minimum value to the new element
            this->st.push(val);
        }
        else
        {
            this->st.push(val - this->min); // Push the difference between the new element and the current minimum
            if (this->min > val)
            {
                this->min = val; // Update the minimum value if the new element is smaller
            }
        }
    }

    void pop()
    {
        if (!this->st.empty())
        {
            if (this->st.top() >= 0)
            {
                this->st.pop(); // If the top element is non-negative, simply pop it from the stack
            }
            else
            {
                this->min = this->min - this->st.top(); // If the top element is negative, update the minimum value
                this->st.pop();
            }
        }
    }

    int top()
    {
        if (this->st.size() == 1)
        {
            return this->st.top(); // If there is only one element, return it directly
        }
        else if (this->st.top() < 0)
        {
            return this->min; // If the top element is negative, return the minimum value
        }
        else
        {
            return this->min + this->st.top(); // Otherwise, add the top element to the minimum value and return the sum
        }
    }

    int getMin()
    {
        return this->min; // Return the minimum value
    }
};

int main()
{
    MinStack stack;

    // Push elements into the stack
    stack.push(5);
    stack.push(2);
    stack.push(7);
    stack.push(1);
    stack.push(3);

    // Get the minimum value in the stack
    cout << "Minimum value: " << stack.getMin() << endl; // Output: 1

    // Get and print the top element
    cout << "Top element: " << stack.top() << endl; // Output: 3

    // Pop an element from the stack
    stack.pop();
    // stack.pop(); this is to just check the functioning of the function

    // Get and print the top element after popping
    cout << "Top element after pop: " << stack.top() << endl; // Output: 1

    // Get the minimum value in the stack after popping
    cout << "Minimum value after pop: " << stack.getMin() << endl; // Output: 1

    return 0;
}
