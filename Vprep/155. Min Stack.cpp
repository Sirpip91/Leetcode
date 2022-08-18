class MinStack {
public:
    stack<int> st;
    MinStack() { }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> temp = st;
        int mn = INT_MAX;
        while(!temp.empty()){
            mn = min(mn, temp.top());
            temp.pop();
        }
        return mn;
    }
};
