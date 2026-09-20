class MinStack {
public:
stack<int> minst;
stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()){
            minst.push(val);
        }
        else{
            minst.push(min(val, minst.top()));
        }
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
