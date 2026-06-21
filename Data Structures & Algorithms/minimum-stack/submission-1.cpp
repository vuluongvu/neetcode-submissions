class MinStack {
public:
    stack<int> minStack;
    stack<int> stack;

    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
        int minVal = std::min(val, minStack.empty() ? val : minStack.top());
        minStack.push(minVal);
    }
    
    void pop() {
        stack.pop();
        minStack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
