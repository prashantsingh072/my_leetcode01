class Solution {
public:
    ListNode* reverseList(ListNode* head, ListNode* prev = nullptr) {
        if (head == nullptr) return prev; 
        
        ListNode* nextNode = head->next;
        head->next = prev;              
        
        return reverseList(nextNode, head); 
    }
};
