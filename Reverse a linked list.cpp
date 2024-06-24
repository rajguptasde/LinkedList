class Solution {
  public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
        // code here
        // return head of reversed list
        struct Node *pre = NULL , *cur = head , *front = NULL;
        if(!head || !head->next) return head;
        
        while(cur )
        {
            front = cur->next;
            
            cur->next = pre;
            
            pre = cur;
            cur = front;
                
        }
        return pre;
    }
};
