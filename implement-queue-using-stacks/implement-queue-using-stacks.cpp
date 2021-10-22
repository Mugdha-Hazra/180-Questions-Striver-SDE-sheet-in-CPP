class MyQueue {
public:
     stack<int> qq;
     stack<int> elements;
    MyQueue(){}
    
    void push(int x) {
       elements.push(x);
    }
    
    int pop() {
        int top = peek();
        qq.pop();
        return top;
    }
    
    int peek() {
       if(qq.empty()){
           while(!elements.empty()){
               qq.push(elements.top());
               elements.pop();
           }
       }
        return qq.top();
    }
    
    bool empty() {
        return qq.empty() && elements.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */