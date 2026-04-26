class MinStack {
public:
    std::stack<int> st, minstack;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if ((minstack.size() == 0 ) || (val <= minstack.top())) {
            minstack.push(val);
        }
        
    }
    
    void pop() {
        int x = st.top();
        st.pop();
        if (x == minstack.top()) {
            minstack.pop();
        }
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return minstack.top();
        
    }
};
