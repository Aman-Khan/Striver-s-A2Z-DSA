    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode* prev=NULL;
        while(head->next){
            ListNode* forw = head->next;
            head->next = prev;
            prev = head;
            head=forw;
        }
        head->next = prev;
        return head;
    }
