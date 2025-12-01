class Node {
public:
    int data;
    Node* next;

    Node(int val) {
       data = val;
       next = nullptr;
    }
};

class MyStack {
    Node* head = nullptr;
public:
    void push(int x) {
        Node* n = new Node(x);
        n->next = head;
        head = n;
    }
    
    int pop() {
        int v = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return v;
    }
    
    int top() {
        return head->data;
    }
    
    bool empty() {
         return head == nullptr;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */