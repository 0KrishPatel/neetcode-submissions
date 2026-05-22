class MinStack {
private:
    stack<int> mstack;
    stack<int> stack;
    
public:

    MinStack() {
        
    }
    
    void push(int val) {
        
        stack.push(val);
        if (mstack.empty() || val <= mstack.top()) {
            mstack.push(val);
        }
    }
    
    void pop() {
        if (stack.top() == mstack.top()) {
            mstack.pop();
        }
        stack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return mstack.top();
    }
};
