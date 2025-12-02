class MyQueue {
    list<int> n1;
    list<int> n2;
public:
    MyQueue() {}

    void push(int x) {
        n1.push_back(x);
    }

    int pop() {
        if (n2.empty()) {
            while (!n1.empty()) {
                n2.push_back(n1.back());
                n1.pop_back();
            }
        }
        int val = n2.back();
        n2.pop_back();
        return val;
    }

    int peek() {
        if (n2.empty()) {
            while (!n1.empty()) {
                n2.push_back(n1.back());
                n1.pop_back();
            }
        }
        return n2.back();
    }

    bool empty() {
        return n1.empty() && n2.empty();
    }
};