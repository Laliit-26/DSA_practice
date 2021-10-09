class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty())
        { int m=s1.top();
            s2.push(m);
         s1.pop();
        }
        s2.push(x);
        while(!s2.empty()){
            int m=s2.top();
            s1.push(m);
            s2.pop();
        }
    }
    
    int pop() {
        int m=s1.top();
        s1.pop();
        return m;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.size()==0;
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