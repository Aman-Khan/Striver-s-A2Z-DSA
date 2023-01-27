    ListNode* deleteMiddle(ListNode* head) {
        if(!head) return head;
        if(!head->next) return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* mid = NULL;
        while(fast && fast->next){
            mid = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        mid->next = slow->next;
        return head;
    }
