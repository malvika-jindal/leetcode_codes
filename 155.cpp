class MinStack {
public:
    stack<int>s;
    stack<int>v;
    MinStack() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    
    void push(int x) {
        s.push(x);
        if(v.empty())
            v.push(x);
        else 
            v.push(min(x,v.top()));
    }
    
    void pop() {
        s.pop();
        v.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return v.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
