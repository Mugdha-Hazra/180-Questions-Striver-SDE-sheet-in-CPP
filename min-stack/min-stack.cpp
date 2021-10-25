
    class MinStack {
public:
    stack<int> myStack;
    stack<int> minStack;
    
    MinStack() {}
    
    void push(int val) {
        myStack.push(val);
        if(minStack.empty()){
            minStack.push(val);
        }
        else{
            int top = minStack.top();
            minStack.push(min(top, val));
        }
    }
    
    void pop() {
        myStack.pop();
        minStack.pop();
    }
    
    int top() {
        return myStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */