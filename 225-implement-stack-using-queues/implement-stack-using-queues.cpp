class MyStack {
public:
    list<int> st;  

    MyStack() {}

    void push(int x) {
        st.push_front(x); 
    }

    int pop() {
        int val = st.front(); 
        st.pop_front();      
        return val;
    }

    int top() {
        return st.front();   
    }

    bool empty() {
        return st.empty();
    }
};
